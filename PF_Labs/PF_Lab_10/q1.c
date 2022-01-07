#include <stdio.h>
void swap(int*x,int*y){
    int temp=0;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main(){
    int a=5,b=10;
    swap(&a,&b);
    printf("a:%d\n",a);
    printf("b:%d\n",b);
}
