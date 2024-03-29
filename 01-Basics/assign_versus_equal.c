/*

This is done to show a common programming error in which assignment operator(=) is used instead of equal to operator(==). Here, the expression a=1 returns the assigned value, i.e. 1 so the if statement is executed. If the assigned value would have been 0 i.e. a=0, then the next conditional statement(not the if statement) would have been executed since 0 is equivalent to false.

*/

#include<stdio.h>

int main()

{
	int a=2;
	
	if( a=1 ) printf("a is one. \n");
	else if(a==2)
	{
	
	printf("a is two. \n");
	
	}

	else printf("a is %d \n",a);
	
	return 0;
}
