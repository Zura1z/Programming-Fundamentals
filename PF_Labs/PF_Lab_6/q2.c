#include <stdio.h>
#include <math.h>
int square(int num,int coun,int num2 ){
    if (coun>0){
        num= num * num2;
        --coun;
        return square(num,coun,num2);

    }else
    {
        return;
    }
    
}
int squaresum(int num,int count,int num2){
    int num1 = 0;
    if (num>0)
    {
        if (count<=num2){
            num1 = square(num,num,num);
        return (num1 + squaresum(num-1,count++,num2));
        }
    }
}
int main(){
    printf("This program is going to return sum of sqaure of n numbers\nEnter n number: ");
    int num =0;scanf("%d",&num); int count = 1,ans=0;
    ans = squaresum(num,count,num);
    printf("The answer is : %d",ans);
}
