// funcation prime number
#include <stdio.h>
int prime(int num) {
    if(num<=1) {
        return 0;
    }
    int i;
    for(i=2;i*i<=num;i++) {
        if(num%i==0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int number;
    printf("enter a number: ");
    scanf("%d", &number);

    if (prime(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}

