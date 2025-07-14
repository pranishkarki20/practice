#include <stdio.h>
int sum (int n) ;

int main(){
  printf("sum of 1 to 5 is %d\n", sum(5)); // sum of 1 to 5
    return 0 ;
} 
 int sum( int n) {
    if (n == 1) {
    return 1 ; 
 }
    int sumNm =  sum (n-1); // sum of 1 to n 
    return sumNm * n;
}