#include<stdio.h>

int main()
{

	int value;
	printf("Enter a Number: \n");
	scanf("%d",&value);
	
	if( value == 0 )
	{
		printf("The value you entered was zero. \n");
	}

	else 
	{
		if( value < 0 )		printf("%d is negative. \n",value);
	

		else			printf("%d is positive. \n",value);
	}
	
	return 0;
}
