#include <stdio.h>
int main(){
    int num1=0, num2=0;
    printf("This program will if second num is multiple of first one\n");
    printf("Enter first no :");
    scanf("%d",&num1);
    printf("\nEnter sec no :") ;
    scanf("%d",&num2);
    if ((num1%num2)==0){
        printf("\nyes %d is multiple of %d \n",num2,num1);
    }else
    {
        printf("\nno %d is not mutiple of %d\n ",num2,num1);
    }
    
}
