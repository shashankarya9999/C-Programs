#include<stdio.h>

int palindrome( char *str );  

int main()
{
	char str[30];
	int flag;

	printf("Enter a string: ");
	fgets( str, 30, stdin );

	flag = palindrome( str );

	if( flag == 1 )		printf("The entered string is palindrome.\n");
	else			printf("The entered string is not a palindrome.\n");

	return 0;  
}

int palindrome( char *str )
{
	char *low, *high;

	int flag = 1;

	low = high = str;

	for( ; *str != '\0'; *str++ )	high = str - 1;

	while( high > low )
	{
		if( *low != *high )
		{
			flag = 0;
			break;
		}  

		low++;
		high--;
	}

	return (flag);
}  

