/*

This problem was given in my professor's class notes.

*/

#include<stdio.h>

int main()
{
	int a=1, b=0, c=7;
	int e1,e2,e3,e4,e5,e6;
	
	e1 = a && b;
	printf("Value of a AND b is: %d \n",e1);
	
	if(e1 == 0)	printf("False. \n");
	else		printf("True. \n");

	e2 = a || b;
	printf("Value of a OR b is: %d \n",e2);
	
	if(e2 == 1)	printf("True. \n");
	else 		printf("False. \n");

	e3 = !!c;
	
	if(e3 == 0)	printf("Value of third expression is: %d \nFalse. \n",e3);
	else 		printf("Value of third expression is %d \nTrue. \n",e3);

	e4 = (a) && (!b);
	printf("Value of Fourth Expression is %d \n",e4);

	if(e4 == 0)	printf("False. \n");
	else 		printf("True. \n");

	e5 = (a<b) && (b<c);
	printf("Value of Fifth expression is %d \n",e5);

	if(e5 == 0)	printf("False. \n");
	else 		printf("True. \n");

	e6 = (a>=b) || (b>c);
	printf("Value of Sixth Expression is: %d \n",e6);

	if(e6 == 0)	printf("False. \n");
	else		printf("True. \n");

	return 0;
}
