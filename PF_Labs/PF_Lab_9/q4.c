#include <stdio.h>
#include <math.h>


int main(void){
char array[10]={0};int i=0;printf("Enter string: ");
char dupray[10]={1};int c=0;
while ((array[i]=getchar())!='\n')
{
    c=array[i];
    dupray[c]++;
    if (dupray[c]>2)
    {
        array[i]='0';
    }
    
    i++;
}
printf("%s",array);
}
