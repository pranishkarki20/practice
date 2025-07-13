#include <stdio.h>
 void indian();
 void french();
 int main() {
    printf ("Enter whats your natinoality\n");
    char ch;
    scanf("%c", &ch);
    if (ch == 'I' || ch == 'i') {
        indian();
    } else if (ch == 'F' || ch == 'f') {
        french();
    } else {
        printf("Unknown nationality\n");
    }
    return 0;
}

void indian() {
    printf(" Namaste! You are Indian\n");
}

void french() {
    printf("Bonjour! You are French\n");
}