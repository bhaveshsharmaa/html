//1-100 divide by 5 and 11
#include <stdio.h>

int main() {
    int num;

    printf("numbers divisible by both 5 and 11 is : ");

    for (num = 1; num <= 100; num++) {

        if (num % 5 == 0 && num % 11 == 0) {
            printf("%d ", num);
        }
    }

    return 0;
}

