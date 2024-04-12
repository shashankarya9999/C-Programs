#include<stdio.h>

int main()
{
	int a=4;
	int x;
	x = ++a + a++ + --a;	// x = 5 + 6 + 5 = 16	
	printf("x = %d\n",x);
	printf("a = %d\n",a);

	return 0;		
}
