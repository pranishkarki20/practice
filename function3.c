#include <stdio.h>
//function prototype 
 int sum(int a, int b);

 //function call 
int main() {
    printf("Enter two numbers: ");
    int a; 
    printf("Enter two numbers: ");
    int b;      
    scanf("%d ", &a, &b);
 int s = sum (a, b);
    printf("The sum is: %d\n", s);  
    return 0 ;
}
 int sum(int a , int b) {
    return a + b;
 }