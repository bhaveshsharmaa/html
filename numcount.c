#include<stdio.h>
int main()
{
   int n;  
   int count=0;   
   printf("enter a number : ");  
   scanf("%d",&n);  
   while(n!=0)  
   {  
       n=n/10;  
       count++;  
   }  
     
   printf("\nthe number of digits count is : %d",count);
    return 0; 

}

