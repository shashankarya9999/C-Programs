#include<stdio.h>

int main()

{
	int i;
	int values[3];	
	int total=0;
	int square;

	for( i=0; i<=3; i=i+1 )
	{
		values[i] = 0;
	}

	for( i=0; i<=3; i=i+1 )
	{
		printf("Enter the number:");
		scanf("%d",&values[i]);
		square= (values[i])*(values[i]);
		total=total+square;	
	}
	printf("\nTotal = %d\n",total);
	return 0;
	
}
