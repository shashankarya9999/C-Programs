/*

This program takes a decimal number(base 10) as input and outputs its binary equivalent(base 2)

*/

#include<stdio.h>
#include<math.h>

void convert( int, int );

int main()
{
	int dec_num,n;

	printf("Enter the number of bits (n) in the binary number: ");
	scanf("%d",&n);

	printf("Enter a decimal number in the range 0 and 2^n - 1: ");
	scanf("%d",&dec_num);
	
	if( dec_num > pow(2,n) - 1 )	printf("Input Decimal Number is out of range.\n");
	
	else				convert( dec_num, n );
	
	return 0;
}

void convert( int dec_num, int n )
{
	int rems[n];
	int i=0;
	int j;

	while( dec_num != 0 )
	{
		rems[i] = dec_num % 2;
		dec_num = dec_num / 2;
		i = i + 1;
	}
	
	printf("The binary equivalent of the equivalent decimal number is: ");
	for( j=i-1; j>=0; j-- )
	{
		printf(" %d ",rems[j]);
	}
	
	printf("\n");
}
