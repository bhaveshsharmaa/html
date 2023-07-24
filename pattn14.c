#include <stdio.h>
int main() 
{
    int i,j;
    int count = 2;

    for (i=0; i<5; i++) 
	{
        for (j=0; j<5; j++) 
		{
            printf("%d ", count);
            count+=2;
        }
        printf("\n");
    }

    return 0;
}

