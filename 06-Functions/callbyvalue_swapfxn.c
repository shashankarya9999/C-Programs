/*

Here, no swapping of values of num1 and num2 occurs because changes to local variables do not change other variables with the same name. num1 and num2 may appear same for both functions, as they have same name, but major difference is that they have different memory locations. Therefore, the two variables each in both functions are completely different. They are alive only in their function(till the function has control). 

*/

#include<stdio.h>

void swap( int num1, int num2 ); // Function Prototype

int main()
{
	int num1=20;
	int num2=30;

	printf("num1 and num2 before call to swap:\n");
	printf("num1=%d, num2=%d\n",num1,num2);

	swap( num1, num2 ); // Swap function called by main function
	
	printf("num1 and num2 after call to swap:\n");
	printf("num1=%d, num2=%d\n",num1,num2);
	
	return 0;
}

void swap( int num1, int num2 ) // Swap function declaration
{
	int temp;
	temp = num1;
	num1 = num2;
	num2 = temp;
}

