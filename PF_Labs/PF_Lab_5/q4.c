#include <stdio.h>

int main(){
    char chr ;
    printf("Enter character todefine what it is : ");
    scanf(" %c",&chr);
    if (chr>='a' && chr<='z'){
        printf("\nIt is a lower case\n");
    } else if (chr>='A' && chr<='Z'){
        printf("\nIt is a upper case\n");
    }else if (chr>='0' && chr<='9'){
        printf("\nIt is a digit\n");
    }else
    {
        printf("\nIt is a special character\n");
    }
    

}
