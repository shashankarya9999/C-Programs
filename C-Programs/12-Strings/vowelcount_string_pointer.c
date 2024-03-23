#include<stdio.h>
#define MAX 20

void vowels( char *str );

int main()
{
	char str[30];

	printf("Enter a string: ");
	fgets( str, MAX, stdin );

	vowels(str);
	
	return 0;  
}

void vowels( char *str )
{
	int count_a=0, count_e=0, count_i=0, count_o=0, count_u=0;

	for( ; *str != '\0'; str++ )
	{
		if( *str == 'a' || *str == 'A' )	count_a = count_a + 1;

		else if( *str == 'e' || *str == 'E' )	count_e = count_e + 1;

		else if( *str == 'i' || *str == 'I' )	count_i = count_i + 1;

		else if( *str == 'o' || *str == 'O' )	count_o = count_o + 1;

		else if( *str == 'u' || *str == 'U' )	count_u = count_u + 1;
	}  

	printf("Number of vowels of each type:\n");
	printf("a = %d\n",count_a);
	printf("e = %d\n",count_e);
	printf("i = %d\n",count_i);
	printf("o = %d\n",count_o);
	printf("u = %d\n",count_u);
}
