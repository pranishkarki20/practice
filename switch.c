#include <stdio.h>

int main() {
    char day;

    printf("Enter a number between a- h: ");
    scanf("%c", &day);

    switch (day) {
        case 'a':
            printf("Sunday\n");
            break;
        case    'b':
            printf("Monday\n");
            break;
        case 'c':
            printf("Tuesday\n");
            break;
        case 'd':
            printf("Wednesday\n");
            break;
        case 'e':
            printf("Thursday\n");
            break;
        case 'f':
            printf("Friday\n");
            break;
        case 'g':
            printf("Saturday\n");
            break;
        default:
            printf("Invalid input\n");
    }

    return 0;
}
