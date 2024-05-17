// This program was included in my professor's class notes

#include<stdio.h>

int main()
{
	int a = 1, b = 2, c = 3;
	int e1, e2, e3, e4, e5, e6, e7, e8, e9;
	e1 = a < c;
	e2 = b <= c;
	e3 = c <= a;
	e4 = a > b;
	e5 = b >= c;
	e6 = a + b >= c;
	e7 = a + b == c;
	e8 = a != b;
	e9 = a + b != c;
	
	printf("e1 = %d \n",e1);
	printf("e2 = %d \n",e2);
	printf("e3 = %d \n",e3);
	printf("e4 = %d \n",e4);
	printf("e5 = %d \n",e5);
	printf("e6 = %d \n",e6);
	printf("e7 = %d \n",e7);
	printf("e8 = %d \n",e8);
	printf("e9 = %d \n",e9);

	return 0;
}
