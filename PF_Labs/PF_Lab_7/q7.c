#include <stdio.h>
void last(int n , int c){
    if (c==1){
        if (n==1){
        printf(" eleven");
        }else if (n==2)
        {
          printf(" twelve");
        }
        else if (n==3)
        {
         printf(" thirteen");
        }
        else if (n==4)
        {
            printf(" fourteen");
        }
        else if (n==5)
        {
            printf(" fiveteen");
        }
        else if (n==6)
        {
             printf(" sixteen");
        }
        else if (n==7)
        {
             printf(" seventeen");
        }
        else if (n==8)
        {
            printf(" eighteen");
        }
          else if (n==9)
        {
             printf(" nineteen");
        }
    }else if (n==1){
            printf(" one");
    }else if (n==2)
    {
         printf(" two");
    }
    else if (n==3)
    {
         printf(" three");
    }
    else if (n==4)
    {
         printf(" four");
    }
    else if (n==5)
    {
         printf(" five");
    }
    else if (n==6)
    {
         printf(" six");
    }
    else if (n==7)
    {
         printf(" seven");
    }
    else if (n==8)
    {
         printf(" eight");
    }
    else if (n==9)
    {
         printf(" nine");
    }else
    {
        return;
    }    
}
void seclast(int n)
{
    if (n==2)
    {
         printf(" twenty");
    }
    else if (n==3)
    {
         printf(" thirty");
    }
    else if (n==4)
    {
         printf(" fourty");
    }
    else if (n==5)
    {
         printf(" fivety");
    }
    else if (n==6)
    {
         printf(" sixty");
    }
    else if (n==7)
    {
         printf(" seventy");
    }
    else if (n==8)
    {
         printf(" eighty");
    }
    else if (n==9)
    {
         printf(" ninety");
    }else
    {
        return;
    }
}
void thirdlast(int n){
    if (n==1)
    {
        printf("One hundred and");
    }
    
    if (n==2)
    {
         printf("Two hundred and");
    }
    else if (n==3)
    {
         printf("Three hundred and");
    }
    else if (n==4)
    {
         printf("Four hundred and");
    }
    else if (n==5)
    {
         printf("Five hundred and");
    }
    else if (n==6)
    {
         printf("Six hundred and");
    }
    else if (n==7)
    {
         printf("Seven hundred and");
    }
    else if (n==8)
    {
         printf("Eight hundred and");;
    }
    else if (n==9)
    {
         printf("Nine hundred and");
    }else
    {
        return;
    }


}
int main (void){
    printf("Enter number to be intout into words.\nEnter number :");
    int num =0 ; scanf("%d",&num);
    int digit = num % 10;int tnum=0;
    thirdlast(num/100);
    tnum =num-((num/100)*100);
    seclast(tnum/10);
    last(num%10,tnum/10);
    printf("\n");
    }
