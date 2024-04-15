#include<stdio.h>

int main()
{
	char ch,newline;
	
	printf("Enter a character: ");
	ch = getchar();
	newline = getchar();
	printf("The value of %c is %d. \n",ch,ch);
	printf("The value of %c is %d. \n",newline,newline);
	
	return 0;
}
