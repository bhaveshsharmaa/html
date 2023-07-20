//5 and 11 divisivle
#include<stdio.h>
int main()
{
	int a;
	printf("enter one number ");
	scanf("%d",&a);
	if(a%5==0 &&a%11==0)
	{
		printf("this number is divide by 5 and 11");
	}
	else
	{
		printf("this number not divide by 5 and 11");
	}
	return 0;
}
