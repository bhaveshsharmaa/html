#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (isalpha(ch)) {
        printf("The character is an alphabet.\n");
    } else {
        printf("The character is not an alphabet.\n");
    }

    return 0;
}

