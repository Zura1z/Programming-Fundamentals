#include <stdio.h>
#include <ctype.h>
int main(){
char str[50]={0};
int i=0;
int vovel=0;
printf("Enter string: ");
while ((str[i]=getchar())!='\n')
{
    if (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
    {
        vovel++;
    }
    i++;
}
printf("Total vovels are %d\n",vovel);

}