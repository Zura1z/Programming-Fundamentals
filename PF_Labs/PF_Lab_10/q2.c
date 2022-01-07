#include <stdio.h>
#include <math.h>
float cubeRoot(int* x){
    float cRoot=pow(*x, .333333);
    return cRoot;

}
int main(){
    printf("Enter number for cube root: ");int num=0;scanf("%d",&num);
    printf("%.2f\n",cubeRoot(&num));
}