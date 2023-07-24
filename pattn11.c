#include <stdio.h>
int main() 
{
    int i,j;
    int count=1;

    for (i=0; i<4; i++) {
        for (j=0; j<4; j++) {
            printf("%d ", count);
            count++;
        }
        printf("\n");
    }

    return 0;
}

