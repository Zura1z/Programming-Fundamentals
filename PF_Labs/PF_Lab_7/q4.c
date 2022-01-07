#include <stdio.h>
int main(void){
    printf("This program will check if a certain number is special or not.\nEnter number: ");
    int num=0;scanf("%d",&num);
    int initialnum = num;
    int sum =0;int digit=0;
    while (num>0)
    {
        digit = num%10;
        sum = sum + (digit*digit*digit);
        num = num / 10;
    }
    if (sum == initialnum){
        printf("Yes, %d is a special number.\n",initialnum);
    }else
    {
        printf("%d is not a special number.\n",initialnum);
    }    
}
