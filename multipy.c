 #include <stdio.h>
  int main(){
    int a ; 
    printf("Enter a number whose  product you want to find ");
    scanf("%d", &a);
    int product ;
     for (int i=1; i<=10; i++){
        product = a * i;
        printf("The product of %d is %d\n", a, product);
     }
     return 0 ;
  }
  