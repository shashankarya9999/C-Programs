#include<stdio.h>

int main()
{
	int n, counter = 0;

	printf("Enter a number: ");
	scanf("%d",&n);

	while( n!=0 )
	{
		n = n / 10;
		counter = counter + 1;
	}

	printf("The number of digits are: %d\n",counter);
	
	return 0;
}
