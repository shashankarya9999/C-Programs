#include<stdio.h>

int main()
{
	int i,j,k,num;
	char x = 'A';
	
	printf("Enter the number of rows: ");
	scanf("%d",&num);

	for( i=1; i<=num; i=i+1 )
	{
		for( j=i; j<num; j=j+1 )
		{
			printf(" ");
		}
		
		for( k=1; k<=i; k=k+1 )
		{ 
			printf("%c ",x);
			x=x+1;
		}
		
	printf("\n");
	}
	
	return 0;
}
