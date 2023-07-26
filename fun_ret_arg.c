#include<stdio.h>
int add(int a, int b );
int main()
{
	int r=add(1,2);
	printf("%d",r);
}
int add(int a, int b )

{
	int c=a+b;
	return c;
}
