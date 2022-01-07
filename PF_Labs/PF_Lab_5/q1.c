#include <stdio.h>

int main(){
    int num1 = 0, num2 = 0;
    char opr ;
    int operator = 0;
    printf("ENter two number to get operations\n");
    printf("Enter first No : ");
    scanf("%d",&num1);
    printf("Enter Opertor :");
    scanf("%c",opr);
    printf("Enter Sec No : ");
    scanf("%d",&num2);

    if (opr == '+'){
        operator = num1 + num2;
    }else if (opr == '-')
    {
        operator = num1 - num2;
    }else if (opr == '*')
    {
        operator = num1 * num2;
    }else if (opr=='/')
    {
        if (num2==0){
            printf("\nERROR");
        }else
        {
            operator = num1 / num2;
        }
        
    }else
    {
        printf("\nERROR\n");
    }
    printf ("\nThe answer is %d\n",operator );


}


