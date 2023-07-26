#include<stdio.h>
void add(int a, int b);
int main()
{
	add (1,2);
}
void add(int a, int b)
{
	int c=a+b;
	printf("%d",c);
}
