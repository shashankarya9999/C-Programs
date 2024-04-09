#include<stdio.h>
#define MAX 50

void reverse( char *str );

int main()
{
	char str[50];

	printf("Enter a string: ");
	fgets( str, MAX, stdin );
	reverse(str);

	printf("The reversed string is: ");
	puts(str);
	
	return 0;
}

void reverse( char *str )
{
	char *begin, *end, ch;

	begin = str;

	for( ; *str != '\0'; *str++ )	end = str - 1;

	while( end > begin )
	{
		ch = *end;
		*end = *begin;
		*begin = ch;
		begin++;
		end--;
	}

	*str = '\0';
}		
