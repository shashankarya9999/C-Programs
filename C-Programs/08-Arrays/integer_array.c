#include<stdio.h>

int main()

{
	int number[6]={ 0,1,2,3,4,5 };
	int i;
	int max=number[0];
	int min=number[0];
	float sum=0;
	float avg,total=0;

	for( i=0; i < 6; i=i+1 )
	{
		if( number[i]>max ) max=number[i];
	} 
	printf("The maximum array element= %d\n",max);
	
	for( i=0; i < 6; i=i+1 )
	{
		if( number[i]<min ) min=number[i];
	}
	printf("The minimum array element= %d\n",min);
	
	for( i=0; i < 6; i=i+1 )
	{
		sum=sum+number[i];
	}
	avg=sum/6;
	printf("Average= %f\n",avg);
	
	for( i=0; i < 6; i=i+1 )
	{
		if( i%2 == 0 ) total=total+number[i];
		else;
	}
	printf("Sum of numbers stored at even indices= %f\n",total);
	
	printf("Original Array:\n");
	for( i=0; i < 6;i=i+1 )
	{
		printf("%d",number[i]);
		printf(" ");
	}
	printf("\nArray contents in reverse:\n");
	for( i=5; i>=0; i=i-1 )
	{
		printf("%d",number[i]);
		printf(" ");
	}
	printf("\n");	
	return 0;	
}



