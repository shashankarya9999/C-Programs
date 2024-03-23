#include<stdio.h>

int main()

{
	int num;
	int sum=0;
	
	do
	{
		printf("Enter an Integer: ");
		scanf("%d",&num);
		sum=sum+num;
	} while( num!=0 );
	
	printf("The sum of the entered integers is %d \n",sum);
	return 0;
}

