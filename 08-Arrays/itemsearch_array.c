#include<stdio.h>

void find_array( int array[], int a, int b );

int main()
{
	int num;
	int k;
	int i;

	printf("Enter number of elements in array: ");
	scanf("%d",&num);

	int item[num];

	for( i=0; i<num; i=i+1 )
	{
		printf("Enter an integer: ");
		scanf("%d",&item[i]);
	}

	printf("Enter the value of the item you want to search in the array: \n");
	scanf("%d",&k);

	find_array( item, k, num );
}

void find_array( int item[], int a, int b )
{
	int j;
	int flag=0;

	for( j=0; j<b; j=j+1 )
	{
		if( item[j] == a )
		{
			printf("Found!\n");
			printf("The searched item is at index = %d\n",j);
			flag = 1;
		}
	}
	
	if ( flag == 0 )	printf("The element does not exist in the array!\n");
}	
