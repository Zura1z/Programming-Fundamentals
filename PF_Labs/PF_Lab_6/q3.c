#include <stdio.h>
void stars(int n){
    
    if (n==1){
        printf("*");
    }else{
        printf("*");
        stars(n-1);
    }
}

void PrintTriangle(int TotalNoOfRows )
{
     if (TotalNoOfRows>0){
     stars(TotalNoOfRows);
     printf("\n");
     PrintTriangle(TotalNoOfRows-1);
     }
}
int main(){
    printf("This will print stars");
    int num = 0; scanf("%d",&num);
    PrintTriangle(num );
}
