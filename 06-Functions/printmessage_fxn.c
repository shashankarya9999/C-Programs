#include<stdio.h>

void printmessage( int counter );

int main()

{
        int num;
	
	printf("Enter an integer: ");
	scanf("%d",&num);

	printmessage(num);
        
	return 0;
}

/*

printMessage - prints a message a specified number of times
   
inputs: counter - the number of times the message will be printed
outputs: None(because return type is void)

*/

void printmessage( int counter )

{
        int i;
	
	for( i=0; i < counter; i=i+1 )
	{
		printf("Shashank!\n");
	}

	return;
}
