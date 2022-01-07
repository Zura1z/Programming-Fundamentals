#include <stdio.h>
int lcm(int n,int i,int c){
    c++;
    if ((n%i==0))
    {
        return n;
    }else if ((i%n==0))
    {
        return i;
    }else if ((i%n==0))
    {
        return c;
    }
    
    

}
int main(){
    printf("Enter two numbers to find lcm: ");
    printf("\nThe first one:");
    int num1 = 0;scanf("%d",&num1);
    printf("\nThe second one:");
    int num2 = 0;scanf("%d",&num2);
    printf("\nTHe answer is: %d\n",lcm(num1,num2,1));
}
