// PALLINDROME NUMBER
#include<stdio.h>
int main()
{
	int num=12321,rem,sum=0;
	int temp;
	temp=num;
	while(num>0)
	{
		rem=num%10;
		sum=sum*10+rem;
		num /=10; //num=num/10
	}
	if(temp == sum){
		print("this number is pallindrome number");
	}
	else{
		printf("this is not pallindrome number");
	}
	return 0;
}
