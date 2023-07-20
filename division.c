#include<stdio.h>
int main()
{
	int a;
	printf("enter the number");
	scanf("%d",&a);
	if(a%11==0 && a%5==0)
	{
		printf("divide by 5 and 11");
		
	
	}
	else
	{
		printf("not devide by 5 and 11");
	}
	
	
	return 0;
}
