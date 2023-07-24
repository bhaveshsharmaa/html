//1-100 divide by 21
#include <stdio.h>

int main() {
    int num;

    for (num = 1; num <= 100; num++) {

        if (num % 21 == 0 ) {
            printf("%d ", num);
        }
    }

    return 0;
}

