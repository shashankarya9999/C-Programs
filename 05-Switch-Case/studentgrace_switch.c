#include<stdio.h>

int main()	//let us C( Pg. 146 )
{
	int c,n;

	printf("Enter class: ");
	scanf("%d",&c);

	printf("Enter the number of subject you failed in: ");
	scanf("%d",&n);

	switch( c )
	{
		case 1:
			if( n > 3 )	printf("No Grace\n");
			else		printf("Total Grace marks = %d\n",n*5);
			break;
		case 2:
			if( n > 2 )	printf("No Grace\n");
			else		printf("Total Grace marks = %d\n",n*4);
			break;
		case 3:
			if( n > 1 )	printf("No Grace\n");
			else		printf("Total Grace marks = %d\n",n*5);
			break;			
	}
	return 0;
}
