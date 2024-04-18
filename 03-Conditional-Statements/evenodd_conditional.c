#include<stdio.h>

int main()
{
	int a;
	
	printf("Enter a number: ");
	scanf("%d",&a);
	
	( a % 2 == 0 ) 
	? printf("The Number is Even \n") 
	: printf("The Number is Odd \n");
	
	return 0;
}
