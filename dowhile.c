#include <stdio.h>
int main(){
    int s ;
    int sum = 0;
    printf("Enter the number of  s natural number to be printed\n");
    scanf("%d", &s);
    for ( int i = 1 ; i <= s; i++ ){
       sum = sum + i;
    }
      printf("The sum of first %d natural numbers is %d\n", s, sum);
    return 0;
}
