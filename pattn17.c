#include <stdio.h>
int main() 
{
    int i,j,k;
    for(i=0; i<4; i++) 
	{
        for (j=0; j<i; j++) 
		{
            printf(" ");
        }
        for (k=i;k<4; k++) {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}

