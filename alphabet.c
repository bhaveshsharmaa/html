#include <stdio.h>

int main() 
{
	int a;
	char c;
	printf("enter a charcter");
	scanf("%d %c",&a,&c);

    if (c >= 'A' && c <= 'Z') 
	{
    printf("that is uppercase");
    } 
   else if (c >= 'a' && c <= 'z')
   {
    printf("that is lowercase");
   
     }
    else if (a >='0' && a >='9')
   {
    printf("Digit");
   }
   else 
   {
   	printf("this is not charcter");
   }

 return 0;
}

