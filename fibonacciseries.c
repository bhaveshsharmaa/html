//fibronic series
#include<stdio.h>
int main()    
{    
 int n1=0,n2=1,n3;
 int i,num;
     
 printf("enter the number :");    
 scanf("%d",&num);    
 printf("%d %d",n1,n2);    
 while(i < num)
     {
          n3 = n1 + n2;
          printf("%d ", n3);
          n1 = n2;
          n2 = n3;
          i++;
     }
     return 0;

 }    
