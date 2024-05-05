#include<stdio.h>

int main()
{
	int num;
	
	do
	{
		printf("Enter a positive number: \n");
		scanf("%d",&num);
		
		if( num <= 0 )		printf("That is not positive. Try Again. \n");
		else 			printf("The number you entered is %d. \n",num);
		
	} while( num <= 0 );

	return 0;
}
