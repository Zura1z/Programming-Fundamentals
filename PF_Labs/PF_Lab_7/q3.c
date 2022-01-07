#include <stdio.h>
int main(void){
    printf("Enter number to count its digits: ");
    int num=0;scanf("%d",&num);
    int digits = 1;
    while (num > 0)
    {
        if ((num/10)>0)
        {
            digits++;
        }
        num = num / 10;
    }
    printf("THe no of digits are: %d\n",digits);
}
