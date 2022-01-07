#include <stdio.h>
int main(){
    int sum = 0;
    printf("Enter 6th digit number to get reverse : ");
    scanf("%d",&sum);
    int a = 0,b=0,c = 0 ,d=0,e=0,f=0 ;
    a = sum % 10 ;
    sum = sum / 10 ;
    b = sum % 10 ;
    sum = sum / 10 ;
    c = sum % 10 ;
    sum = sum / 10 ;
    d = sum % 10 ;
    sum = sum / 10 ;
    e = sum % 10 ;
    sum = sum / 10 ;
    f = sum % 10 ;
    sum = sum / 10 ;
    printf("%d%d%d%d%d%d\n",a,b,c,d,e,f);

    
}