#include<stdio.h>

void swap( int *p, int *q ); // Function Prototype

int main()

{
        int num1=20;
        int num2=30;

        printf("num1 and num2 before call to swap:\n");
        printf("num1=%d, num2=%d\n",num1,num2);

        swap( &num1,&num2 ); // Swap function called by main function

        printf("num1 and num2 after call to swap:\n");
        printf("num1=%d, num2=%d\n",num1,num2);

        return 0;
}

void swap( int *p, int *q )

{
	int temp;
	temp= *p;
	*p=*q;
	*q=temp;
}
