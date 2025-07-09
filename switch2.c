
#include <stdio.h>

int main() {
    int mainChoice, subChoice;

    // Ask for main menu choice
    printf("Main Menu:\n");
    printf("1. Food Menu\n");
    printf("2. Drinks Menu\n");
    printf("Enter your main choice (1 or 2): ");
    scanf("%d", &mainChoice);

    switch (mainChoice) {
        case 1:
            printf("You selected: Food Menu\n");
            printf("Sub Menu:\n");
            printf("1. Burger\n");
            printf("2. Pizza\n");
            printf("Enter your food choice: ");
            scanf("%d", &subChoice);

            switch (subChoice) {
                case 1:
                    printf("You selected: Burger\n");
                    break;
                case 2:
                    printf("You selected: Pizza\n");
                    break;
                default:
                    printf("Invalid food choice!\n");
            }
            break;

        case 2:
            printf("You selected: Drinks Menu\n");
            printf("Sub Menu:\n");
            printf("1. Coffee\n");
            printf("2. Juice\n");
            printf("Enter your drink choice: ");
            scanf("%d", &subChoice);

            switch (subChoice) {
                case 1:
                    printf("You selected: Coffee\n");
                    break;
                case 2:
                    printf("You selected: Juice\n");
                    break;
                default:
                    printf("Invalid drink choice!\n");
            }
            break;

        default:
            printf("Invalid main menu choice!\n");
    }

    return 0;
}
