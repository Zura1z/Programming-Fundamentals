#include <stdio.h>
#include <math.h>

int main()
{
int TiM,time;
int TiS;
printf("This program will output your time in minutes \n");
printf("Enter time in seconds : ");
scanf("%d",&time);
TiM = time / 60;
TiS = ((time / 60)-TiM );
printf("The time is %d mins and %d secs \n",TiM,TiS);

return 0;

}
