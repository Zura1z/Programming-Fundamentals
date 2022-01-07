#include <stdio.h>

int main(){
    int num = 0 ;
    printf("Enter num to know its even or odd :");
    scanf("%d", &num);
    if ((num % 2)== 0 ){
        printf("\nIts even\n");
    }else
    {
        printf("\nits odd\n");
    }
}
