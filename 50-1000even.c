// 50-1000 even number
#include <stdio.h>
int main() 
{ 
	int number = 50; 
 
    while( number <= 1000 ) 
    { 
        if( (number % 2) ==0 ) 
        { 
            printf("%d ", number); 
        } 
		number++; 
    } 
 
    return 0;
} 
