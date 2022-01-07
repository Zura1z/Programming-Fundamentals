#include <stdio.h>
int main(){
    
    
    int num=0;
    printf("This program will print binary of :");
    int tnum = 0;scanf("%d",&tnum);
    int a = 0,b=0,c = 0 ,d=0,e=0,f=0 ;
    a = num % 2 ;
    num = num / 2 ;
    b = num % 2 ;
    num = num / 2 ;
    c = num % 2 ;
    num = num / 2 ;
    d = num % 2 ;
    num = num / 2 ;
    e = num % 2 ;
    num = num / 2 ;
    f = num % 2 ;
    num = num / 2 ;
    int i=1;int bin=0;
    while (tnum>0)
    {
        a = tnum % 2 ;
        tnum = tnum / 2 ;
        bin = bin +(a)*i;
        i=i*10;
        
    }
    printf("%d",bin);
    printf("\n");
    //printf("%d \n",num);
    //printf("The binary is ");
    //printf("%d%d%d%d%d%d\n",a,b,c,d,e,f);
}