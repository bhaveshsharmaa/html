#include <stdio.h>

int main()
 {
 	 int i,j,k;
 	printf("enter the number : ");
 	scanf("%d",&k);
   

    for (i=1; i<=k; i++) {

        for (j=1; j<=k; j++) {
            printf("%d ", i);
        }

        printf("\n");
    }

    return 0;
}

