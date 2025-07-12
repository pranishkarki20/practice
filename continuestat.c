#include<stdio.h>
 int main(){ 
    int i = 5;
    do{
        if(i%2==0){
            i++;
        continue;
        }
        printf("%d \n", i);
    } while (i <= 50);
 }