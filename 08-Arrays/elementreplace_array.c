#include<stdio.h>

int main()

{
	int i;

	int num[11]={ 1,2,3,4,5,6,7,8,9,10 };

	printf("The original array: \n");
	for( i=0; i<11; i=i+1 )
	{
		printf("%d ",num[i]);
	}	

	for( i=10; i>3; i=i-1 )
	{
		num[i]=num[i-1];
	}

	num[3]=42;
	
	printf("\nThe modified array: \n");
	for( i=0; i<11; i=i+1 )
	{
		printf("%d ",num[i]);
	}
	printf("\n");
	
	return 0;
}
