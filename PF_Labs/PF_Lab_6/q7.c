#include <stdio.h>
char prime(int n,int count){
    if(count<n){
        if((n%count) == 0)
        {
            prime(n,count+1);
        }else
        {
            return ('p');
        }
    }else
    {
        return ('n');
    }
}
int main (){
    printf("This program will print if num is prime or not\n");
    printf("Enter num: ");
    int num = 0;
    scanf("%d",&num);
    if (prime(num,2)=='p')
    {
        printf("\nIt is not a prime num");
    }else
    {
        printf("\nIt is prime num");
    }
}