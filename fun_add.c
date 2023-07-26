#include<stdio.h>
float add(int a,float b);
int main()
{
	int a=5;
	float b=4.5;
	float result=add(a,b);
	printf("%f",result);
	
	return 0;
}

	float add(int a, float b)
{
	float result = a+b;
	printf("%f",result);
}
