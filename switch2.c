//This program is of nested switch i.e  switch indside switch
#include <stdio.h>

int main() {
    int mainChoice = 1;
    int subChoice = 2;

    switch (mainChoice) {
        case 1:
            printf("Main menu: Option 1 selected\n");

            switch (subChoice) {
                case 1:
                    printf("Sub menu: Option 1 selected\n");
                    break;
                case 2:
                    printf("Sub menu: Option 2 selected\n");
                    break;
                default:
                    printf("Invalid sub menu choice\n");
            }
            break;

        case 2:
            printf("Main menu: Option 2 selected\n");
            break;

        default:
            printf("Invalid main menu choice\n");
    }

    return 0;
}
