#include <stdio.h>
int main() {
    int num;

    printf("Enter a number between  1-10: ");
    scanf(" %d", &num);

    switch (num) {
        case 1:
            printf("odd");
            break;
        case 2:
            printf("even\n");
            break;
        case 3:
            printf("odd\n");
            break;
        case 4:
            printf("even\n");
            break;
        case 5:
            printf("odd\n");
            break;
        case 6 :
            printf("even\n");
            break;
        case 7:
            printf("odd\n");
            break;
        case 8:
        printf("even\n");   
            break;
            case 9:
            printf("odd\n");    
            break;
        case 10:    
        printf("even\n");
            break;      
        default:
            printf("Invalid input\n");
    }

    return 0;
}
