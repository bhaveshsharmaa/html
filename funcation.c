// return and argument
 
#include<stdio.h>
int show(int a);  // parameter ( funcation declaration )
int main()
{
	int result;
	result = show(1);  // funcation call
	printf("%d",result);
	return 0;
}
	int show(int a)  // define
	{
		return a;
	}


