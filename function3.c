#include <stdio.h>
 float  square (int x) ;
 float circle (int y );
 float rectangle (int a, int b);

 int main () {
  printf("Enter the length of the square: ");
  int x;
  scanf("%d", &x);
  printf("The area of the square is: %.2f\n", square(x));
  printf("Enter the radius of the circle: ");
  int y;
  scanf("%d", &y);
  printf("The area of the circle is: %.2f\n", circle(y));
  printf("Enter the length and width of the rectangle: ");
  int a, b;
  scanf("%d %d", &a, &b);
  printf("The area of the rectangle is: %.2f\n", rectangle(a, b));
 }

 float square (int x) {
  return (float)x * x;
 }

 float circle (int y) {
  return 3.14 * (float)y * y;
 }

 float rectangle (int a, int b) {
  return (float)a * b;
 }
