#include <stdio.h>
#include <math.h>
int fact(int n){
    if (n==0)
    {
        return 1;
    }
    else if (n>0)
    {
        return n*fact(n-1);
    }
}
int main(){
    int num,numpow=1,den=1,count=0,x,n;float up,down, sumrow=0.0,sum=0.0;
    printf("Enter x:");scanf("%d",&x);
    printf("Enter n:");scanf("%d",&n);
    //printf("%d",fact(5));
    for (int i = 1; i <= n; i++)
    {
        
        up = pow(x,numpow);
        numpow+=2;
        down=fact(den);
        den+=2;
        sumrow=up/down;
        //printf("%f",sumrow);
        if (count==0)
        {
            sum =sum +sumrow;
            count=1;
        }else
        {
            sum=sum -sumrow;
            count=0;
        }
    }
    printf("The answer is :%f\n",sum);
return 0;
}
