#include<stdio.h>

float averageTwo( int num1, int num2 );

int main()

{
	float ave;
	int a,b;
	
	printf("Enter two integers: ");
	scanf("%d%d",&a,&b);
	
	ave = averageTwo( a,b );
	printf("\nThe average of %d and %d is %f\n",a,b,ave);
	
	return 0;
}

float averageTwo( int num1, int num2 )

{
	float average;
	
	average= (num1+num2)/2.0;
	return average;
}
