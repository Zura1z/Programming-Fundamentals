#include <stdio.h>
#include <math.h>

int main(void){
    int num=0;
    printf("Enter num:");
    scanf("%d",&num);
    for (int i = 1; i<=num; i++)
    {
        for (int k = 1;k<=(num*2)-(i*2); k++)
        {
            printf(" ");
        }
        for (int j = i; j >0 ; j--)
        {
            printf(" %d",j);   
        }
        for (int l = 2; l <=i ; l++)
        {
            printf(" %d",l);   
        }
        printf("\n");
        
    }
    
return 0;
}