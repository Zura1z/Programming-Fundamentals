#include <stdio.h>


int main(){
    char word1[50]={'s','c','h','o','o','l'};
    char word2[50]={'l','a','p','t','o','p'};
    char word3[50]={'m','o','u','s','e'};
    printf("%s\n",word1);
    for (int j = 1; j < 4; j++)
    {
        for (int i = 0; i < 10; i++)
    {
            if (j==1)
            {
                printf("%c",word1[i]);
            }else if (j==2)
            {
                printf("%c",word2[i]);
            }else
            {
                printf("%c",word3[i]);
            }
    }
    
    printf("\n");
    
    }
    char n[15]={0};printf("Number: ");scanf("[%s^\n]",&n);printf("%s\n",n);
}