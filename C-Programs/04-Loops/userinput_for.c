#include<stdio.h>

int main()

{
	int num;
	printf("Enter a positive number: \n");
	scanf("%d",&num);	

	if( num == 0 ) printf("The number you entered is zero. \n");
	
	else
	{	
	for( ; num < 0 ; )
	{
		printf("That is not a positive number. \n");
		printf("Enter another positive number: \n");
		scanf("%d",&num);
	}
	}

	if(num==0);
	else	{
		printf("The number you entered is %d. \n",num);
		}
	
	return 0;
}
