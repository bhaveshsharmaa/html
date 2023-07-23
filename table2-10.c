// table 2 to 10
#include <stdio.h>

int main() {
    int i = 2, j;

    while (i <= 10) {
        printf("table of  %d: ", i);
        j = 1;

        while (j <= 10) {
            printf("%d x %d = %d, ", i, j, i * j);
            j++;
        }
       printf("\n",i++);
    }

    return 0;
}

