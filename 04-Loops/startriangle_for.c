#include<stdio.h>

int main()
{
	int row,col,num;

	printf("Enter the number of rows: ");
	scanf("%d",&num);
		
	printf("Your Triangle! \n");	

	for( row=1; row <= num; row=row+1 )
	{
		for( col=1; col <= row; col=col+1  )
		{
			printf("*");
		}

	printf("\n");
	}
	
	return 0;
}
