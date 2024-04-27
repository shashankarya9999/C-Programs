#include<stdio.h>

int main()
{
	int row = 1;
	int col;
	int num;

	printf("Enter the number of row: ");
	scanf("%d",&num);
	printf("\nYour Triangle!\n");
	printf("\n");
	
	while( row <= num )
	{	
		col = 1;
		while( col <= row )
		{
			printf("*");
			col = col + 1;
		} 
	
	printf("\n");
	row = row + 1;
	}
	
	printf("\n");
	
	return 0;
}
