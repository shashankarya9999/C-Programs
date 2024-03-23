#include<stdio.h>

int main()

{
	/* This program takes user input and checks if it is positive or negative or zero. If it is zero, we get two statements saying it is zero. If the number is positive, we right away get a statement which says the number is <number> and if the number is negative, we get an error message and a statement which gets another input from user. This continues until we get a positive number as user input(not zero, as it is a different case here)  */
	
	int number;
	printf("Enter a Positive Integer: \n");
	scanf("%d",&number);

	if( number == 0 ) printf("The number you entered is zero. \n");
	else
	{
	while( number < 0 )
	{
		printf("That's Incorrect. Try Again. \n");
		printf("Enter another Positive Integer: \n");
		scanf("%d",&number);
	}
	}
	printf("You entered: %d\n",number);
	return 0;
}
