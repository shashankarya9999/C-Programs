// This problem was given in my professor's class notes

#include<stdio.h>

int main()

{
	int a=5,b=7,c=17;
	int e1,e2,e3,e4,e5;
	
	e1 = c/b == 2;
	e2 = c%b <= a%b;
	e3 = b+c/a != c-a;
	e4 = (b<c) && (c==7);
	e5 = (c+1-b == 0) || (b=5);
	
	if( e1 == 1 )	printf("True. \n");
	else 		printf("False. \n");

	if( e2 == 1 ) 	printf("True. \n");
        else 		printf("False. \n");

	if( e3 == 1 ) 	printf("True. \n");
        else 		printf("False. \n");

	if( e4 == 1 ) 	printf("True. \n");
        else 		printf("False. \n");

	if( e5 == 1 ) 	printf("True. \n");
        else 		printf("False. \n");

	return 0;
}
