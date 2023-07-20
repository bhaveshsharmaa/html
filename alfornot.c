#include <stdio.h>
int main() {
	int a;
    char c;
    printf("Enter a character: ");
    scanf(" %d %c", &a,&c);

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        printf("this is an alphabet.", c);
        
    else if (a >='0' && a >='9')
        printf("this is an number.", a);
    else 
        printf("this is not an alphabet.", c);

    return 0;
}
