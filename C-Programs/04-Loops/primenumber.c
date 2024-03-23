#include<stdio.h>
#include<math.h>

int main()

{
	int num,i,j;
	int flag=1;
	printf("Enter an integer: ");
	scanf("%d",&num);
	printf("\nThe prime numbers between 1 and n are as follows: \n");

	for( i=2; i<=num; i++ )
	{
		for( j=2; j<=sqrt(i) ; j++ )
		{
			if( i%j == 0 ) 
			{
				flag=0;
				break;
			}

		}
		
		if( flag == 1 )
		{ 
			printf("%d",i);
			printf(" ");
			printf("\n");
		}
	flag=1;
	}	
	return 0;
	
}

