#include <stdio.h>
#include "rps.h"

/*Following function will check what computer choice was given as parameter
and then compare that value with the choice by the user (that too given as parameter).
If choice is same then function will return 0 , if user wins then returns 1 else return -1
incase computer wins.  
*/
int comparison(int UserChoice ,char* ParaName ,int ComputerChoice)
{
	int Output = 0;
	if (ComputerChoice == 1) 
	{
		if (UserChoice == 1)
		{
			printf("Computer picked ROCK, %s picked ROCK.\n",ParaName); 
			printf("\n");
			printf("We picked the same thing! This round is a draw.\n");
			Output = 0 ;
		}
		else if (UserChoice == 2)
		{
			printf("Computer picked ROCK, %s picked PAPER.\n",ParaName); 
			printf("\n");
			printf("PAPER covers ROCK. You win.\n");
			Output = 1 ;
		}
		else if (UserChoice == 3)
		{
			printf("Computer picked ROCK, %s picked SCISSORS.\n",ParaName);
			printf("\n"); 
			printf("ROCK breaks SCISSORS. I win.\n");
			Output = -1 ;
		}
		else
		{
			printf("Computer picked ROCK, %s picked INVALID.\n",ParaName); 
			printf("\n");
			printf("Invalid choice. You lose.\n");
			Output = -1 ;
		}
	}
	else if (ComputerChoice == 2)
	{
		if (UserChoice == 1)
		{
			printf("Computer picked PAPER, %s picked ROCK.\n",ParaName);
			printf("\n"); 
			printf("PAPER covers ROCK. I win.\n");
			Output = -1 ;
		}
		else if (UserChoice == 2)
		{
			printf("Computer picked PAPER, %s picked PAPER.\n",ParaName); 
			printf("\n");
			printf("We picked the same thing! This round is a draw.\n");
			Output = 0 ;
		}
		else if (UserChoice == 3)
		{
			printf("Computer picked PAPER, %s picked SCISSORS.\n",ParaName); 
			printf("\n");
			printf("SCISSORS cut PAPER. You win.\n");
			Output = 1 ;
		}
		else 
		{
			printf("Computer picked PAPER, %s picked INVALID.\n",ParaName); 
			printf("\n");
			printf("Invalid choice. You lose.\n");
			Output = -1 ;
		}
	}
	else if (ComputerChoice == 3)
	{
		if (UserChoice == 1)
		{
			printf("Computer picked SCISSORS, %s picked ROCK.\n",ParaName); 
			printf("\n");
			printf("ROCK breaks SCISSORS. You win.\n");
			Output = 1 ;
		}
		else if (UserChoice == 2)
		{
			printf("Computer picked SCISSORS, %s picked PAPER.\n",ParaName); 
			printf("\n");
			printf("SCISSORS cut PAPER. I win.\n");
			Output = -1 ;
		}
		else if (UserChoice == 3)
		{
			printf("Computer picked SCISSORS, %s picked SCISSORS.\n",ParaName); 
			printf("\n");
			printf("We picked the same thing! This round is a draw.\n");
			Output = 0 ;
		}
		else
		{
			printf("Computer picked SCISSORS, %s picked INVALID.\n",ParaName); 
			printf("Invalid choice. You lose.\n");
			Output = -1 ;
		}
	}
	return Output ;

}

/*Following is the second most important function in this program. This function is
 going to call a randon declaring function from rps.h and then ask user to input their choice.
 This function also calls another function from rps.h to get a random choice by computer.
 Then this function sends user choice , comp choice and name to comparison function.Value
 returned by comparison fucntion is then sent back to fucntion that calls Game function 
*/

int Game (char* Name , int RoundNumber)
{
	int Compc=0;
	int Choice=0 , data ;
	initializeRandom();
	printf("\n");
	printf("Round %d.\n",RoundNumber);
	printf("%s, please enter your choice for this round.\n",Name);
	printf("1 for ROCK, 2 for PAPER, and 3 for SCISSORS: ");
	scanf("%d",&Choice);
	Compc = getComputerChoice();
	data = comparison(Choice,Name,Compc);
	return data;
}

/*
Following function displays the number of times computer won , number of times user
won and number of times game went draw.Data is displayed due to parameters passed to 
this function .It also compares all values to determine who won and who lost
*/
void DisplayResult(char* NameOfUser , int NoOfDraws , int NoOfUserWins,int NoOfCompWins){
	printf("\n");
	printf("Number of times Computer won: %d\n",NoOfCompWins);
	printf("Number of times %s won: %d\n",NameOfUser,NoOfUserWins);
	printf("Number of draws: %d\n",NoOfDraws);
	if (NoOfCompWins > NoOfUserWins)
	{
	printf("I, Computer, am a master at ROCK, PAPER, SCISSORS.\n");
	} else if ( NoOfUserWins > NoOfCompWins )
	{
	printf("You, %s, are a master at ROCK, PAPER, SCISSORS.\n",NameOfUser);
	} else 
	{
	printf("We are evenly matched.\n");
	}

}

int main(void)
{
	char name[100];
	int result = 0 , RoundNo = 0 ;
	int Draws = 0 , UserWins = 0 , CompWins = 0 ; 

	printf("Welcome to ROCK PAPER SCISSORS.\n");
	printf("I, Computer, will be your opponent.\n");
	printf("Please type in your name and press return: ");
	scanf("%s", name);

	printf("Welcome %s.\n\n", name);

	printf("All right %s. We will be playing 3 rounds.\n", name);
	//Calling function for Round 1...
	result = Game(name,++RoundNo) ; 
	if (result != 0){
		result==1? UserWins++ : CompWins++ ;
	}else{
		Draws++;
	}
	//Calling function for Round 2...
	result = Game(name,++RoundNo) ; 
	if (result != 0){
		result==1? UserWins++ : CompWins++ ;
	}else{
		Draws++;
	}
	//Calling function for Round 3...
	result = Game(name,++RoundNo) ; 
	if (result != 0){
		result==1? UserWins++ : CompWins++ ;
	}else{
		Draws++;
	}
	//Calling fucntion to display result of all three round
	DisplayResult(name , Draws , UserWins , CompWins);
}

