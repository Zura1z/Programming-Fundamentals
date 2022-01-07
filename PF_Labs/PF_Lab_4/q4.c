#include <stdio.h>
int main(){
    int number1 = 0;
    int number2 = 0;
    int number3 = 0;
    int sum = 0 ;
    char comma1,comma2 ;
    printf("Enter three number separated by a comma to get sum:");
    scanf("%d%c%d%c%d",&number1,&comma1,&number2,&comma2,&number3);
    sum = number1 + number2 + number3 ;
    printf("The sum is %d \n",sum);
    
}