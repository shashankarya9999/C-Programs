/*

This program takes two numbers as input and, according to the index input given by user, it outputs the result of the selected arithmetic operation 

*/

#include<stdio.h>

int main()

{
	int num1,num2,index;
	printf("Enter two numbers: ");
	scanf("%d%d",&num1,&num2);
	printf("Index of Addition=0 \n");
	printf("Index of Subtraction=1 \n");
	printf("Index of Multiplication=2 \n");
	printf("Index of Division=3 \n");
	printf("Index of Modulus Division=4 \n");	

	printf("\nEnter the index: ");
	scanf("%d",&index);	

	/*
	   Index for addition=0
	   Index for subtraction=1
	   Index for multiplication=2
	   Index for division=3
      	*/
	switch( index )
	{
		case 0: 
			printf("Addition= %d\n",num1+num2);
			break;
		case 1:
			printf("Subtraction= %d\n",num1-num2);
			break;
		case 2:
			printf("Product= %d\n",num1*num2);
			break;
		case 3:
			printf("Division= %d\n",num1/num2);
			break;
		case 4:
			printf("Modulus Division = %d\n",num1%num2);
			break;
		default:
			printf("Invalid Index. \n");
			break;	
	}
	
	return 0;
}

