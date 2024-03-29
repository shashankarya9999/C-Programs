#include<stdio.h>

void addOne( int num1 );

int main()

{
	int num1=5;
	addOne( num1 );
	printf("In Main: num1 = %d\n",num1);
	return 0;
}

void addOne( int num1 )

{
	num1=num1+1;
	printf("In addOne: num1 = %d\n",num1);
}
