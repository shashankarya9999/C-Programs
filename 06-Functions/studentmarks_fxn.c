#include<stdio.h>

void avg( int, int, int );
void percent( int, int, int );

int main()
{
	int m1,m2,m3;
	printf("Enter marks in three subjects: ");
	scanf("%d%d%d",&m1,&m2,&m3);

	if( ( m1 < 0 || m1 > 100 ) && ( m2 < 0 || m2 > 100 ) && ( m3 < 0 || m3 > 100 ) )	
	{	
		printf("Invalid Input!\n");
	}
		
	else
	{
		avg( m1, m2, m3 );
		percent( m1, m2, m3 );
	}
	
	return 0;
}

void avg( int m1, int m2, int m3 )
{
	printf("Average = %f\n",(float)( ( m1 + m2 + m3 ) / 3) );
}

void percent( int m1, int m2, int m3 )
{
	printf("Percentage = %f %%\n",(float)( ( m1 + m2 + m3 ) / 3) );
}

