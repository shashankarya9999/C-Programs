#include<stdio.h>

int main()
{
	int row,col,num;
	int number = 1;
	
	printf("Enter the number of rows: ");
	scanf("%d",&num);

	for( row=1; row<=num; row=row+1 )
	{
		for( col=1; col<=row; col=col+1 )
		{
			printf("%d",number);
			printf(" ");
			number=number+1;
		}
		
	printf("\n");
	}

	return 0;
}
