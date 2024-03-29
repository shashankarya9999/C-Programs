#include<stdio.h>

int main()
{
	char name[25];

	printf("Enter your name: ");
	
	fgets( name, 14, stdin );
	

/*	scanf("%[^\n]s",name);

	printf("Hello %s!\n",name);	*/

	printf("%s\n",name);

	return 0;
}
