#include <stdio.h>
#include <math.h> 
int main() {
    printf("Enter a numbers whose square you want to get : ");
    float a; 
   scanf("%f", &a);
    printf("The square of %f is %.2f\n", a , pow(a, 2));
    return 0 ;
}

 
