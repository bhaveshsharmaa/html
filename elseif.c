#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter frist, second and third number");
	scanf("%d\n %d\n %d",&a,&b,&c);
	if(a>b&&a>c)
	{
		printf("a is max");
	}
	else if(b>a&&b>c)
	{
		printf("b is max");
	}
	else if(c>b&&c>a)
	{
		printf("c is max");
	}
	else
	{
		printf("all value is equal");
	}
	
	
	return 0;
}
