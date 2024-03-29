#include<stdio.h>

float average; // Global Declaration of average(It is accessible by both main and averageTwo functions)

void averageTwo( int num1, int num2 ); // Function Prototype

int main()

{
	int num1=5;
	int num2=8;
	
	averageTwo(num1,num2); // Function averageTwo called by main function 

	printf("The average of %d and %d is %f\n",num1,num2,average);
	
	return 0;
}

// Definition of averageTwo function begins 

void averageTwo(int num1,int num2) // averageTwo function header

{
	average=(float) (num1+num2)/2;	// statement of averageTwo function
}


