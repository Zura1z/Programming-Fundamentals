#include <stdio.h>

int main(void){
    printf("Enter num to see its reversable or not.\nEnter num: ");
    int num=0;scanf("%d",&num);
    int digit1=1,digit2=0,sum = 0,digit=2;
    
    char retch;
    while (num >0 ){
        int tnum = num;
    while (digit1>0){
        digit1 = tnum/10;
        tnum = tnum/10;
    }
        digit2 = num %10 ; 
        
        
        if (digit2==digit1){
            num = num /10 ; 
            retch='c';
        }else 
        {
        num = 0;
        }
        while (digit>9)
        {
            num = (digit);
        }
    }
    if (retch=='c')
    {
        printf("It is reversable\n");
    }else
    {
        printf("Not reversable\n");
    }
    
    
    

    
}
