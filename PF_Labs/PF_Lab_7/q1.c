#include <stdio.h>
int main(void){
    printf("Enter a number to print a pattern: ");
    int num =0 ; scanf("%d",&num);
    int i=1;
    while (i<num)
    {
        printf("%d ",i);
        i++;
    }
    printf("%d",num);
    while (i>1)
    {
        
        printf(" %d",--i);
        
    }
    printf("\n");
    
    
}
