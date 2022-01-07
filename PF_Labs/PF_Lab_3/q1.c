#include <stdio.h>
#include <math.h>

int main()
{

int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,x=0;

printf("Enter three numbers for the formulae as a,b,c \n");

printf("enter A value : ");
scanf("%d",&a);

printf("enter B value : ");
scanf("%d",&b);

printf("enter C value : ");
scanf("%d",&c);

d=b*b;
e=(4*a*c);
f=d-e;
g=sqrt(f);
h=-b+g;
x=h/(2*a);

printf("The answer is :%d\n",x);

return 0;

}
