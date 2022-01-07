#include <stdio.h>
int recursive (int n,int sum){
    if (n>0){
    //n = n%10;
    sum=sum+1;
    return recursive(n/10,sum);
    }else
    {
        return sum;
    }
}
int main(){
    int sum = 0 ;
    printf("This function will print sum of digits\nEnter Digits: ");
    int num = 0; scanf("%d",&num);
    printf("\nThe answer is :%d",recursive (num,sum));


}

