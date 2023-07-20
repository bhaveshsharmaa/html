
#include <stdio.h>

int main()

{
// 45+(23*2-9)/34	
	int a=45;
	int b=23;
	int c=2;
	int d=9;
	int e=34;
	
	int result=a+(b*c-d)/e;
	printf("%d\n",result);
	
// 2+34*12-(34)
	
	int f=2;
	int g=34;
	int h=12;
	
    int result1=f+g*h-(g);
    printf("%d\n",result1);
    
 // 245-(56*2)+6
 
    int i=245;
	int j=56;
	int k=2;
	int l=6;
	
    int result2=i-(j*k)+l;
    printf("%d\n",result2);
    
// 2*4+98-45

    int m=2;
	int n=4;
	int o=98;
	int p=45;
	
    int result3=m*n+o-p;
    printf("%d\n",result3);

	return 0;
}
