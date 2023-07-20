//fectorial number
#include<stdio.h>
int main()
{
	int num=5,i=1;
	int fact=1;
	while(i<=num)
	{
		fact *=i;  //fact=fact*i
		i++;
	}
	printf("%d",fact);
	return 0;
}
