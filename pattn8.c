#include<stdio.h>
int main() 
{
	
    int i = 5;
    int j = 4;

    for(i=5; i>=1; i--) 
    {
    
        for(j=1; j<=4; j++) 
        {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}
