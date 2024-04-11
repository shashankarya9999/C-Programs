#include<stdio.h>

int main()
{
	char a;
	printf("Enter a character: ");
	scanf("%c",&a);
	printf("The next character is: %c \n",++a);
	printf("& the corresponding ASCII value is: %d \n",a);
	
	return 0;
}
