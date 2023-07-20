#include<stdio.h>
/*int main()
{
	char z,a,f,g,h;
	printf("enter alphabet");
	scanf("%d",&z);
	if(z==a||z==f||z==g||z==h)
	{
		printf("yes");
	}
	else 
	{
		printf("no");
	}
	
	
	
	
	return 0;
}*/

/*int main()
{
	char e,f;
	printf("enter alphabet");
	scanf("%c",&e);
	if(e==f)
	{
		printf("female");
		
	}
	else 
	{
		printf("male");
	}
	
	return 0;
}*/

/*int main() 
{
    int year;

    printf("Enter a year ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}*/

int main()
{
	int math,che,phy,hindi,eng;
	printf("enter marks");
	scanf("%d %d %d %d %d",&math,&che,&phy,&hindi,&eng);
	if(math>=40 &&che>=40 &&phy>=40 &&hindi>=40 &&eng>=40)
{
		int avg;
	int sum=math+che+phy+hindi+eng;
	avg=sum/5;
	printf("pass");
}
	else
	 {
	printf(fail);
}
	
	
	
	return 0;
}

