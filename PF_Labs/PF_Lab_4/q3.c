#include <stdio.h>
int main(void){
    int amount ;
    printf("Enter amount of the money to get no of notes : ");
    scanf("%d",&amount);
    int NoOf100s , NoOf50s , NoOf20s , NoOf10s , NoOf5s , NoOf1s ,NoOf2s;
    NoOf100s = amount / 100 ;
    amount = amount % 100 ;
    NoOf50s = amount % 50 ;
    amount = amount % 50 ;
    NoOf20s = amount / 20 ;
    amount = amount % 20 ;
    NoOf10s = amount % 10 ;
    amount = amount % 10 ;
    NoOf5s = amount % 5 ;
    amount = amount % 5 ;
    NoOf2s = amount / 2 ;
    amount = amount % 2 ;
    NoOf1s = amount % 1 ;
    amount = amount % 1 ;
    printf("Number of 100s is %d . Number of 50s is %d .",NoOf100s,NoOf50s);
    printf("Number of 20s is %d . Number of 10s is %d .",NoOf20s,NoOf10s);
    printf("Number of 5s is %d . Number of 2s is %d .",NoOf5s,NoOf2s);
    printf("Number of 1s is %d .",NoOf1s);
return 0 ;
}
    