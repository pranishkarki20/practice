#include <stdio.h>
// function prototypes
 void printhello();
 void printgoodbye();
// function calls
  int main() {
    printhello();
    printgoodbye();
    return 0;
  }
// Function definitions
  void printhello() {
    printf("helloworld\n");
  }
  void printgoodbye() {
    printf("goodbye\n");
  }