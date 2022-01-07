#include <stdio.h>

int main(){
    int sum = 0 , reverse = 0;
    printf("Enter 6th digit number to get reverse : ");
    scanf("%d",&sum);
    int a = 0,b=0,c = 0 ,d=0,e=0,f=0 ;
    int g = 0,h=0,i = 0 ,j=0,k=0,l=0;
    a = sum % 10 ;
    sum = sum / 10 ;
    l=a;
    b = sum % 10 ;
    sum = sum / 10 ;
    k=b;
    c = sum % 10 ;
    sum = sum / 10 ;
    j=c;
    d = sum % 10 ;
    sum = sum / 10 ;
    i=d;
    e = sum % 10 ;
    sum = sum / 10 ;
    h=e;
    f = sum % 10 ;
    sum = sum / 10 ;
    g=f;
    if (a==g&&b==h&&c==i&&d==j&&e==k&&f==l){
        printf("\nReverse and sum are equal\n");
    }else
    {
        printf("\nNo the num and reverse are not equal\n");
    }
    


}
