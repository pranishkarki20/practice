#include<stdio.h>
 int main() {
    int i ;
    printf("Enter a number :");
    scanf("%d",&i);
    // Pre increment operator
    printf("the  post increment is %d\n",i++);
    printf("the  post increment is %d\n",i);

    // Post increment operator 
    printf("the  post increment is %d\n",++i);
    printf("the  post increment is %d\n",i);
    return 0 ;
 }