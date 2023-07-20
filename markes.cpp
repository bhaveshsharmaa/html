#include<stdio.h>
int main()
{
	int h,e,m,s,sst,c;
	
	printf("enter marks",h,e,m,s,sst,c);
	scanf("%d %d %d %d %d %d",&h,&e,&m,&s,&sst,&c);
	if(h>=40 && e>=40 && m>=40 && s>=40 && sst>=40 && c>=40)
	
	{
		printf("you are pass");
		
	}
	else
	{
		printf("you are fail");
	}
	return 0;
	
}
