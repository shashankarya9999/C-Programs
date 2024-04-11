#include<stdio.h>
#include<string.h>

void the_delete( char *s, int l ); 

int main()	// work why consecutive 'the' are not getting deleted
{
	char str[30];

	printf("Enter a string: ");
	fgets(str, 30, stdin);

	the_delete( str, strlen(str) );

	return 0;
}

void the_delete( char *s, int l )
{
	for( int i=0; s[i] != '\0'; i++ )
	{
		if( s[i] == 't' && s[i+1] == 'h' && s[i+2] == 'e' && s[i+3] == ' ' )
		{
			for( int j=i; j<l; j++ )
			{
				s[j] = s[j+4];
				s[j+1] = s[j+5];
				s[j+2] = s[j+6]; 
			}
		i = i - 4;
		l = l - 4;
		}
	}
	printf("%s\n",s);
}
