// wap to write the programm to print the sum of n natural number
#include <stdio.h>
int main () {
    int s, sum = 0, i;
    printf("enter the natrual number whose sum you want to print: ");   
    scanf("%d", &s);
    for (i = 1; i <= s; i++) {
        sum += i;
    }printf("the sum of first %d natural number is %d", s, sum);
    return 0;
}