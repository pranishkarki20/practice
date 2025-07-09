#include <stdio.h>
int main() {
    int num;

    printf("Enter a number between  0-10: ");
    scanf(" %d", &num);

  if (num >=30 && num <=100){
    printf("Congratulations! You have passed \n");
  }
  else if (num <= 30){
    printf("sorry! You have failed \n");
  }
  else {
    printf("Invalid input! Please enter a number between 0 and 100.\n");
  }
  
    return 0;
}
