#include<stdio.h>
int add(int a,int b); 
int sub(int a,int b);
int mul(int a,int b);
int div(int a,int b);
int mod(int a,int b);  
int main(){
	int result,i,j;
	printf("enter frist number: ");
	scanf("%d",&i);
		printf("enter second number: ");
	scanf("%d",&j);
	printf("\n");
		result=add(i,j);
	printf("add=%d",result);
	
	printf("\n");
		result=sub(i,j);
	printf("sub=%d",result);
	
	printf("\n");
		result=mul(i,j);
	printf("mul=%d",result);
		 
		 printf("\n");
		 result=div(i,j);
	printf("div=%d",result);
	 
	 printf("\n");
	 	result=mod(i,j);
	printf("mod=%d",result);
	
	
	
	return 0;
	
} 
int add(int a,int  b){
	return a+b;
}
int div(int a,int b){
return a/b;
}
int mul(int a,int b){
	return a*b;
}
int sub(int a,int b){
	return a-b;
	
}
int mod(int a,int b){
	return a%b;
}
