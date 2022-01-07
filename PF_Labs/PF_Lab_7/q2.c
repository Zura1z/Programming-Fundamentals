#include <stdio.h>
char CheckPrime(int n){
    int i = 2;
    if (n%i==0)
    {
        return 'N';
    }else
    {
        i++;
    }
}
int main(void){
    printf("This program will check if a number is prime or not.\nEnter number: ");
    int num=0;scanf("%d",&num);
    int i = 2;
    char RetCh;
    while (i<num)
    {
        if(num%i==0){
            printf("%d is not a prime number.\n",num);
            RetCh = 'N';
            i = i + num;
        }else
        {
            i++;
        }
    }
    if (RetCh!='N')
    {
        printf("%d is a prime number.\n",num);
    }
    
}

