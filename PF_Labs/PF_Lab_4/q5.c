#include <stdio.h>
#include <stdlib.h>
int main(){
    int num1 = 0,num2 = 0,num3 = 0 ;
    printf("Enter three numbers to get max : \n");
    scanf("%d%d%d",&num1,&num2,&num3);
    int max = ((num1+num2)+abs(num1-num2))/2;
    max = ((max+num3)+abs(max-num3))/2;
    printf("Max is %d",max);    
}