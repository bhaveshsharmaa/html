#include<stdio.h>
int main()
{
	int a=15;
	int b=29;
	
	printf("the real number is : %d\n",a);
	printf("the real number is : %d\n",b);
	
	a=a+b;
	b=a-b;
	a=a-b;
		printf("the swap number is : %d\n",a);
		printf("the swap number is : %d",b);
	
	
	return 0;
}
