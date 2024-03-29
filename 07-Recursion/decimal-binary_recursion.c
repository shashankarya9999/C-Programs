#include<stdio.h>

int dec_bin( int );

int main()
{
	int num;
	printf("Enter decimal number: ");
	scanf("%d",&num);

	printf("The binary equivalent is: %d\n",dec_bin(num));

	return 0;
}

int dec_bin( int n )
{
	if( n == 0 )	return 0;

	else	return( n%2 + 10*( dec_bin( n/2 ) ) );
}
