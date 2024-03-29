#include<stdio.h>

int main()

{
	int row=1;
	int col,num;
	int number=1;
	
	printf("Enter the number of rows: ");
	scanf("%d",&num);
	if( num==0 )	printf("No Triangle! \n");
	else printf("Your Triangle! \n");

	while( row <= num )
	{
		col=1;
		while( col <= row )
		{
			printf("%d",number);
			printf(" ");
			col=col+1;
			number=number+1;
		}
	printf("\n");
	row=row+1;
	}
	return 0;	
}
