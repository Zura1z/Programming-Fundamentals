#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAXCHAR 100

int main(){
    FILE *NegativeFile,*PositiveFile,*StopwordsFile;
    char *CurrentWord;
    int PositiveWords=0,NegativeWords=0,StopWords=0;
    
    printf("enter a review -- Press return to exit:\n");
    
    char InputArray[5000],ch;int CurrentElement=0;char InputArrayDublicate[5000];
    
    /*Getting input from user in array*/
    while((ch=getchar())!='\n' && ch!=27){
        InputArray[CurrentElement]=ch;
        InputArrayDublicate[CurrentElement]=tolower(ch);
        CurrentElement++;
    }
    if(ch==27){
        return 0 ;
    }
    CurrentWord=strtok(InputArrayDublicate," ,.-!@*$&*<>{}[]/#_");
    
    while (CurrentWord != NULL)
    {
    NegativeFile = fopen("negative-words.txt","r");
    PositiveFile = fopen("positive-words.txt","r");
    StopwordsFile = fopen("stopwords.txt","r");
    /*******************************************************/
    /*                    For StopWords                    */
    /*******************************************************/
    char Check_Stopword[MAXCHAR];
    char For_check='F';
        while(fgets(Check_Stopword, MAXCHAR, StopwordsFile) != NULL) {
            fscanf(StopwordsFile,"%s", Check_Stopword);
            if((strcmp(Check_Stopword, CurrentWord))==0){
               StopWords++;
               For_check='T';
             break;
            }
        }
    fclose(StopwordsFile);
    //Now to remove stopwords and stopping them from consideration
    if(For_check!='F'){
        CurrentWord = strtok (NULL, " ,.-!@*$&*<>{}[]/#_");
        continue;
    }
    /*******************************************************/
    /*                    For NegativeWords                */
    /*******************************************************/                
    char Check_Negativeword[MAXCHAR];
        while(fgets(Check_Negativeword, MAXCHAR, NegativeFile) != NULL) {
            fscanf(NegativeFile,"%s", Check_Negativeword);
            if((strcmp(Check_Negativeword, CurrentWord))==0){
               NegativeWords++;
             break;
            }
        }
    fclose(NegativeFile);
    /*******************************************************/
    /*                    For PositiveWords                */
    /*******************************************************/  
    char Check_Positiveword[MAXCHAR];
        while(fgets(Check_Positiveword, MAXCHAR, PositiveFile) != NULL) {
            fscanf(PositiveFile,"%s", Check_Positiveword);
            if((strcmp(Check_Positiveword, CurrentWord))==0){
               PositiveWords++;
             break;
            }
        }
    fclose(PositiveFile);
    /*******************************************************/
    /*                        --Loop                       */
    /*******************************************************/     
    CurrentWord = strtok (NULL, " ,.-!@*$&*<>{}[]/#_");
    }
    //Now checking negative,positive and if both equal then neutral
    if (PositiveWords>NegativeWords)
    {
        printf("Positive Sentiment\n");
    }else if(NegativeWords>PositiveWords)
    {
        printf("Negative Sentiment\n");
    }else
    {
        printf("Neutral Sentiment\n");
    }
    return 0 ;
}
