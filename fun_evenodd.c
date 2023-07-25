// funcation even or odd 
#include <stdio.h>
int isEvenOrOdd(int num) {
    if (num%2==0) {
        return 1; // even number
    } else {
        return 0; // odd number
    }
}

int main() {
    int number;
    printf("enter a number: ");
    scanf("%d", &number);

    if (isEvenOrOdd(number)) {
        printf("%d is even.\n", number);
    } else {
        printf("%d is odd.\n", number);
    }

    return 0;
}

