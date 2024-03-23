#include<stdio.h>
#include<math.h>

void convert_dec( int a, int b );

int main()

{
	int dec,n;
	
	printf("Enter the number of bits (n) in the binary number: ");
	scanf("%d",&n);

	printf("Enter a decimal number between 0 and 2^n - 1: ");
	scanf("%d",&dec);

	if( dec > pow(2,n) - 1 )	printf("Entered number is out of range!\n");
	
	else	convert_dec( dec, n );
}

void convert_dec( int a, int b )

{ 
	int rem[b];
	int i=0;
	int j;

	while( a != 0 )
	{
		rem[i] = a % 2;
		a = a / 2;
		i=i+1;
	}

	printf("The binary equivalent of the entered decimal number is: ");

	for( j=i-1; j>=0; j=j-1 )
	{
		printf("%d ",rem[j]);
	}

	printf("\n");
}
