#include <stdio.h>
#include <time.h>

int main(){
    int num1 =0,num2=0,opr=0;
    float Ranswer = 0.0 ;
    int Uanswer=0;
    srand(time(0));
    num1 = rand()%1000;
    num2 = rand()%1000;
    opr = rand()%4;
    char operator;

    if (opr==0)
    {
        Ranswer = num1 + num2;
        operator = '+';
    }else if (opr==1)
    {
         Ranswer = num1 - num2;
         operator = '-';
    }else if (opr==2)
    {
         Ranswer = num1 * num2;
         operator = '*';
    }
    else {
        Ranswer = num1 / num2;
        operator = '/';
    }
    printf("%d %c %d = ",num1,operator,num2);
    printf("\nEnter your answer :");
    scanf("%d",&Uanswer);
    if (Uanswer==Ranswer){
        printf("\nYour answer matches\n");
    }else
    {
        printf("\nYour answer is wrong\n");
    }
    printf("The answer is %.0F \n",Ranswer);
}
