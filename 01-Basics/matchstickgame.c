#include<stdio.h>

int main()
{
	int m=21, p ,c;

	while( 1 )
	{
		printf("Number of matchsticks left = %d\n",m);
		printf("Pick: 1/2/3/4 matches: ");
		scanf("%d",&p);
		
		if( p<1 || p>4 )	
		{
			continue;
		}
		
		m = m - p;

		printf("Number of matches left = %d\n",m);

		c = 5 - p;

		printf("Out of which the computer has picked %d\n",c);

		m = m - c;

		if( m == 1 )
		{
			printf("Number of matches left = %d\n",m);
			printf("You lost the game!\n");		
			break;
		}
	}
}
