//armstrong number
#include<stdio.h>
int main()
{
	int num=153,rem,sum=0;
	int temp;
	temp=num;
	while(num>0)
	{
		rem=num%10;
		sum=sum*10+rem*rem*rem;
		num=num/10;
	}
	if(temp == sum)
	{
		printf("number is armstrong");
	}
	else{
		printf("number is not armstrong");
	}
	return 0;
}
