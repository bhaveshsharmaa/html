#include <stdio.h>

int main() {
    int num = 2;
    int i;

    printf("multiplication table of %d:\n", num);
    while(i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
