#include<stdio.h>

int main()
{
	int i,j,num;

	printf("Enter the number of rows: ");
	scanf("%d",&num);

	for( i=num; i>0 ; i=i-1 )
	{
		for( j=1; j<=i; j=j+1 )
		{
			printf("*");
			printf(" ");
		}		
	
	printf("\n");
	}

	return 0;
}
