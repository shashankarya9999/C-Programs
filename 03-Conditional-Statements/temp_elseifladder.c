#include<stdio.h>

int main()	//Let us C book( Pg. 144 )
{
	int temp;
	printf("Enter the temperature: ");
	scanf("%d",&temp);

	if( temp <= 20 )			printf("Oh! Damn Cool!\n");
	
	else if( temp > 20 && temp <= 30 )	printf("Rain rain here again!\n");

	else if( temp > 30 && temp <=40 )	printf("Wish I was on Everest\n");

	else					printf("Good Old Nagpur weather\n");

	return 0;
}

