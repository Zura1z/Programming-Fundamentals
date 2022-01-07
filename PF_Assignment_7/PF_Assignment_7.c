

#include <stdio.h>
#include <ctype.h>
#include "hangman.h"

#define GENRES 		3
#define ALPHABETS 	26
#define MAX_MISTAKES 5

int main( void ) {

	int g;
	const char *s;
	
	init();
	printf("Let's play the game of hangman.\n\n");

	printf("The computer will pick a random phrase.\n");
	printf("Enter letters for your guess.\n");
	printf("After 5 wrong guesses you lose.\n\n");

	printf("I am thinking of a %s ...\n\n", getGenre( g = getRandom(GENRES) ));
	
	s = getPhrase( g );
	// YOUR CODE GOES HERE !
	int length=0;char DublicateArray[20]={0};char HiddenArray[100]={0};
	
	//declaring alphabet array
	char alphabets[26];char falpha='A';
	for (int i = 0; i < 26; i++)
		{
			alphabets[i]=falpha;falpha++;
		}
	//declaring dublicate array
	int i =0;
	while (s[i]!='\0')
	{
		DublicateArray[i]=s[i]; i++;
	}
	
    //initalising HiddenArray
    
    while (DublicateArray[length]!='\0')
		{
			
			if (DublicateArray[length]>='A' && DublicateArray[length]<='Z' && (HiddenArray[length]==0) )
			{
				HiddenArray[length]='*';
			}else if (DublicateArray[length]>='a' && DublicateArray[length]<='z' && (HiddenArray[length]==0) )
			{
				HiddenArray[length]='*';
			}
			else if(DublicateArray[length]=='-' && alphabets[length]!=0 && (HiddenArray[length]==0))
			{
				HiddenArray[length]='-';
			}else if(DublicateArray[length]==' ' && alphabets[length]!=0 && (HiddenArray[length]==0))
			{
				HiddenArray[length]=' ';
			}	
				length++;
		}
    
    int NoOfWrongGuess=0;
    while(1){
		printf("The current phrase is ");//PRINTING HIDDEN PHRASE
		printf("%s\n\n",HiddenArray);
		
		printf("The letters you have not guessed yet are:\n");
		for (int i = 0; i < 26; i++)
			{
				if (alphabets[i]!=0 && i!=25)
				{
					printf("%c--",alphabets[i]);
				}else if (alphabets[i]!=0 && i==25)
				{
					printf("%c",alphabets[i]);
				}
				
			}
		printf("\n\nEnter your next guess: ");char input;
		char c;int cal=0;
		while ( (c=getchar())!='\n' ){if(cal==0){input=c;cal=1;}}
		//************Not valid input*****************//
		int ForTest3=0;
		for (int i = 0; i < 26; i++)
			{
				if (alphabets[i]==toupper(input)){
					ForTest3=1;
				} 
			}
		if (ForTest3==0 || !(isalpha(input)))
		{
			printf("This is not a valid guess.\n\n");
			continue;
		}
		//*******************************************//
		//************UNCOVERING INPUT*****************//
		printf("You guessed %c.\n\n",toupper(input));	
		int ForTest=0;
		for (int i = 0; i <strlen(s); i++)
			{
				if (s[i]==tolower(input)) {
					HiddenArray[i]=tolower(input);
					ForTest=1;
				}
				if (s[i]==toupper(input)) {
					HiddenArray[i]=toupper(input);
					ForTest=1;
				}
			}
		//*********************************************//
		if (ForTest==1)
		{
			printf("That is present in the secret phrase.\n");
		}else
		{
			printf("That is not present in the secret phrase.\n");
			showHangman(NoOfWrongGuess);NoOfWrongGuess++;
		}
		printf("\nNumber of wrong guesses so far: %d\n\n",NoOfWrongGuess);
		//***************IF LOST***************//
		if (NoOfWrongGuess==5)
		{
			printf("You lose.\n");
			printf("The secret phrase was: %s\n\n",s);
			break;
		}	
		//*************************************//
		//***************IF WON***************//
		int ForTest2=0;
		for (int i = 0; i < length; i++)
			{
				if (HiddenArray[i]!='*')
				{
					ForTest2++;
				}
			}
		if (ForTest2==length)
		{
			printf("The current phrase is %s\n",s);
			printf("\nYou Win!!\n");
			break;
		}
		//*************************************//
		for (int i = 0; i < 26; i++)
			{
				if (alphabets[i]==toupper(input) )
				{
					alphabets[i]=0;
				}
			}
    }
}
