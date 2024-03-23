#include<stdio.h>

int main()

{
	int i,j,k,num;
	int x;
	
	printf("Enter the number of rows: ");
	scanf("%d",&num);

	for( i=0; i<num; i=i+1 )
	{
		for( j=i; j<num; j=j+1 )
		{
			printf(" ");
		}
		
		for( k=0; k<=i; k=k+1 )
		{ 
			if( i == 0 || k == 0 )	x=1;
			else	x = (x*(i-k+1)/k);

			printf("%d ",x);
		}
	printf("\n");
	}
	return 0;
}
