#include<stdio.h>
#include<string.h>
#define MAX 80

void space_delete( char *, int );

int main()
{
        char str[MAX];

        printf("Enter a string: ");
        fgets( str, MAX, stdin );

        space_delete( str, strlen(str) );
	
	return 0;
}

void space_delete( char *s, int l )
{
	for( int i=0; s[i] != '\0'; i++ )
	{
		if( s[i] == ' ' )
		{
			for( int j=i; j<l; j++ )
			{
				s[j] = s[j+1];
			}
			i--;
			l--;
		}
	}

	printf("%s",s);
}
