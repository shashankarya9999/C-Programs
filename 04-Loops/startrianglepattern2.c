#include<stdio.h>

int main()
{
	int i,j,k,num;
	
	printf("Enter the number of rows: ");
	scanf("%d",&num);

	for( i=1; i<=num; i=i+1 )
	{
		for( j=1; j<i; j=j+1 )
		{
			printf(" ");
		}
		
		for( k=i; k<=num; k=k+1 )
		{
			printf("*");
		}
	
	printf("\n");
	}
	
	return 0;
}
