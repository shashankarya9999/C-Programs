#include<stdio.h>

int main()
{
	int num,count_p=0, count_n=0, count_z=0;

	do 
	{
		printf("Enter another number(Enter 67 to end): ");	// sentinel value is 67(Ascii for C)
		scanf("%d",&num);

		if( num == 0 )
		{
			count_z++;
		}
			
		else if( num > 0 )	
		{
			count_p++;
		}
			
		else	
		{
			count_n++;
		}
		
	} while( num != 67 );

	printf("Number of positive numbers entered = %d\n",count_p);
	printf("Number of negative numbers entered = %d\n",count_n);
	printf("Number of zeroes entered = %d\n",count_z);
	
	return 0;	
}
