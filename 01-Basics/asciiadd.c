#include<stdio.h>

int main()
{
	char x,y;
	int z;
	
	printf("Enter two charcters: \n");
	scanf("%c %c",&x,&y);
	
	z = x + y;
	printf("The addition is: %d \n",z);
	
	return 0;
}
