#include <stdio.h>

int main() 
{
    char ch;

    printf("enter a character:-  ");
    scanf("%c", &ch);

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) 
	 {
        printf("the character is an alphabet.\n");
    } else {
        printf("the character is not an alphabet.\n");
    }

    return 0;
}
