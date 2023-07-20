#include <stdio.h>

int main()
{
    int phy, chem, bio, math, comp; 
    float per; 

    printf("enter five subjects marks: ");
    scanf("%d%d%d%d%d", &phy, &chem, &bio, &math, &comp);



    per = (phy + chem + bio + math + comp) / 5.0;

    printf("prcentage = %.2f\n", per);


    if(per >= 80)
    {
        printf("grade A");
    }
    else if(per >= 80)
    {
        printf("grade B");
    }
    else if(per >= 60)
    {
        printf("grade C");
    }
    else if(per >= 40)
    {
        printf("grade D");
    }
    else if(per >= 25)
    {
        printf("grade E");
    }
    else
    {
        printf("grade F");
    }

    return 0;
}
