#include <stdio.h>
//function prototype 
  void sum(int a);

 //function call 
int main() {
    printf("Enter two numbers: ");
    int a; 
   scanf("%d", &a);
   sum (a);
    return 0 ;
}
 void sum(int a) { // function definitiona
    for (int i = 1; i <= 10; i++) {
        printf("%d\n", i*a);
    }
 }
 