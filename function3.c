#include <stdio.h>
#include <math.h> 
int main() {
    printf("Enter a numbers whose square you want to get : ");
     int a; 
   scanf("%d", &a);
    printf("The square of %d is %.0f\n", a , pow(a, 2));
    return 0 ;
}


