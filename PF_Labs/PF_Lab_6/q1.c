#include <stdio.h>

int sum(int n){
    if (n>=1){
        return n + sum(n-1);
    }else
    {
        return 0;
    }
    
}

int main(){
printf("This program will will n natural numbers. Enter : ");
int num =0 ;scanf("%d",&num); int total =0;
total = sum(num);
printf("The sum is :%d\n",total);
}

