#include<stdio.h>
void sub();
void div();

int main()
{
     sub();
	 return 0; 
}
void sub()
{
    int a,b;
	printf("enter two number: ");
	scanf("%d\n %d",&a,&b);
	int c=a-b;
	printf("sub two num is : %d\n",c);
	int d=a/b;
	printf("div two num is : %d",d);
}

