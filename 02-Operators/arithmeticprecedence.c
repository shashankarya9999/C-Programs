#include<stdio.h>

int main()
{
	int a=1;
	int b=2;
	int c=3;
	int d=4;
	int e;
	int exp1,exp2,exp3,exp4,exp5;

	exp1= a + b - c + d;
	exp2 = a * b / c;
	exp3= 1 + a * b % c;
	exp4= a + d % b - c;
	exp5= e = b = d + c / b - a;
	
	printf("First Expression=%d \n",exp1);
	printf("Second=%d \n",exp2);
	printf("Third=%d \n",exp3);
	printf("Fourth=%d \n",exp4);
	printf("Fifth=%d \n",exp5);
	printf("Value of e=%d\n",e);
	
	return 0;
}
