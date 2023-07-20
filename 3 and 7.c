#include<stdio.h>
int main()
{
	int a;
	printf("enter a number");
	scanf("%d",&a);
	if(a%7==0 || a%3==0)
	{
		printf("no is divided");
	}
	else
	{
		printf("no is not divided");
	}
	return 0;
}
