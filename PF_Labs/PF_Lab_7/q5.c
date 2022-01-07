#include <stdio.h>
int main(void){
    printf("Enter num to find sum of series: ");
    int num=0;scanf("%d",&num);
    int i=1,j=0,sum=0,count=0;
    while (i<=num)
    {
        while (count!=-1)
        {
            j=(j*10)+1;
            sum = sum + j;
            count=-1;
        }
        count=0;
        i=i+1;
    }
    printf("\nThe sum is : %d\n",sum);    

}
