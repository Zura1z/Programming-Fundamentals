#include <stdio.h>

int main()
{

int CurrentYear,YearOfBirth,Age ;
printf("This program will enter your age ");

printf("Enter Current year : ");
scanf("%d",&CurrentYear);

printf("Enter year of birth : ");
scanf("%d",&YearOfBirth);

Age = CurrentYear - YearOfBirth;
printf("The age is %d\n",Age);

return 0;

}
