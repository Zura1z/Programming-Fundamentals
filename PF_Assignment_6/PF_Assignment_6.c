
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/*This function will calculateAutomated Readability Index(ARI) */
int Calculate_ARI(float Characters,float Words,float Sentences){
    float ARI=(((4.70*(Characters/Words))+(0.50*(Words/Sentences))-21.43));
    if(Words==0||Sentences==0){return 0; }
    if (ARI>0.0)
    {
        if (ARI>(abs(ARI)))
        {
            return ARI + 1.0;
        }else
        {
            return ARI ;
        }
    }else
    {
         return 0;
    }   
}
int main(void){
int count = 1;
while(count>0){
    char CharacterArray[1000]={0};int NoOfSentences=0,NoOfWords=0,NoOfCharacters=0;
    int i=0;
    printf("Enter sentence %d: ",count);
    /*BELOW loop will input characters into arrays*/
    while(CharacterArray[i-1] != '\n') 
    {
        scanf("%c",&CharacterArray[i]);

        i=i+1;
    }
    /*BELOW conditions will close loop if 'quit' entered*/
    if (CharacterArray[0]=='q' && CharacterArray[1]=='u'&& CharacterArray[2]=='i'&& CharacterArray[3]=='t'&& CharacterArray[4]=='\n')
    {
        break;
    }

    i=0;
    /*BELOW loop will check how many characters and sectences entered into arrays*/
    while(CharacterArray[i] != '\n')
    {
        if (CharacterArray[i]=='.'||CharacterArray[i]==';'||CharacterArray[i]==':'||CharacterArray[i]=='!'||CharacterArray[i]=='?')
        {
            NoOfSentences++; /*calculating no of sentences.*/
        }
        else if (isalpha(CharacterArray[i]) || isdigit(CharacterArray[i]))
        {
        }
        i++;
    }
    i=0;
    
    /*BELOW loop will check how many words entered */
    while(CharacterArray[i-1] != '\n')
    {
    	 if (CharacterArray[0]==' ' && i==0){NoOfWords=0;}
        if (CharacterArray[0]=='\n' )
        {
        }else if (CharacterArray[0]!=0 && i==0 && CharacterArray[i+1]!=' ')
        {
            NoOfWords++; /*calculating no of words.*/
        }
        else if (CharacterArray[i+1]!=' ' && CharacterArray[i]==' ' || CharacterArray[i]=='_' || CharacterArray[i]=='-'|| CharacterArray[i]== '\'')
        {
            NoOfWords++;
        }
        i++;
    }
    if (NoOfSentences==0 && CharacterArray[0] != '\n' )
    {
        NoOfSentences=1;
    }
    
    int ARI=Calculate_ARI(NoOfCharacters,NoOfWords,NoOfSentences);
    printf("\nNumber of sentences: %d\nNumber of words: %d\nNumber of characters: %d\n",NoOfSentences,NoOfWords,NoOfCharacters);
    printf("Readability index: %d\n\n",ARI);
    count++;
}
}
