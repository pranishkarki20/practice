#include <stdio.h>
int sum (int n) ;

int main(){
  printf("Enter a number: ");
    int n;
    scanf("%d", &n);
     int f = sum(n);
  printf("sum of 1 to 5 is %d\n" , f); // sum of 1 to 5
    return 0 ;
} 
 int sum (int n) {
     int f = (n* 9/5) + 32; // Convert Celsius to Fahrenheit
     return f; // Return the converted value
 }