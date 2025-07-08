#include <stdio.h>

int main() {
    char answer[100];
    printf("What is your name? ");
    fgets(answer, sizeof(answer), stdin);
    // Remove trailing newline if present
    size_t len = strlen(answer);
    if (len > 0 && answer[len - 1] == '\n') {
        answer[len - 1] = '\0';
    }
    printf("Hello, %s!\n", answer);
    return 0;
}
#include <stdio.h>
int main() {
    string answer = get_string("What is your name? ");
    printf("Hello, %s!\n", answer);
    return 0;
}
