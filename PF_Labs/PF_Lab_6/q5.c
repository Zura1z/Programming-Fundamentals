#include <stdio.h>
int square(int num,int coun,int num2 ){
    if (coun<num2){
        num= num * num;
        ++coun;
        return square(num,coun,num2);

    }else
    {
        return num;
    }
    
}
int main(){
    printf("Enter num and power: ");
    int num = 0;scanf("%d",&num);
    int pow = 0;scanf("%d",&pow);
    printf("\nTHe answer is: %d\n",square(num,1,pow ));
}
