#include <stdio.h>
#define PI 3.14159

int main()
{

printf("This program will print diameter of circle \n");
int radius = 0, diameter = 0;
float area=0.0 ;
printf("Enter radius : ");
scanf("%d",&radius);
area = 2*PI*radius;
diameter = 2*radius;
printf("The area is %.2f and the diameter is %d\n",area,diameter);

return 0;

}
