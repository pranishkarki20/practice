
#include<stdio.h>
 int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if(ch>='A'&& ch <='Z'){
        printf("Uppercase\n");
    }
    else
    {
        printf("Lowrcase\n");
    }
    return 0;
 }