#include <stdio.h>


int main(void){

 int array[10]={0,1,2,-1,-3,-5,9,5,-5,6};
int negative=0,positive=0,odd=0,even=0;
for (int i = 0; i <10; i++)
{
    if (array[i]>0)
    {
        positive++;
    }else if (array[i]<0)
    {
        negative++;
    }
    if ((array[i]%2)==0)
    {
        even++;
    }else
    {
        odd++;
    }
}
printf("Total positive are %d\nTotal negative are %d\nTotal even are %d\nTotal odd are %d\n",positive,negative,even,odd);
}


