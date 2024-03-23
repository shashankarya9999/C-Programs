#include<stdio.h>

int main()

{

	/* This is Euclid's GCD Algorithm. */

	int num;
	printf("Enter a number: \n");
	scanf("%d",&num);
	
	if( num == 0 ) printf("The number is zero.\n");

	else
	{
	if(num%2 == 0)
		printf("The number is even. \n");
	else
		printf("The number is odd. \n");
	}
	return 0;	
}
