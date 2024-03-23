#include<stdio.h>
#include<string.h>
#define MAX 80

void vowel_delete( char *, int );

int main()
{
	char str[MAX];
	
	printf("Enter a string: ");
	fgets( str, MAX, stdin );

	vowel_delete( str, strlen(str) ); 
}

void vowel_delete( char *s, int l )
{
	for( int i=0 ; s[i] != '\0'; i++ )
	{
		if( s[i] == 'a' || s[i] == 'A' )
		{
			for( int j=i; j<l; j++ )
			{
				s[j] = s[j+1];
			}
		i--;
		l--; 		 	
		}

		else if( s[i] == 'e' || s[i] == 'E' )
		{
		        for( int j=i; j<l; j++ )
                        {
                                s[j] = s[j+1];
                        }
                i--;
                l--;
		}	

		else if( s[i] == 'i' || s[i] == 'I' )
		{
		        for( int j=i; j<l; j++ )
                        {
                                s[j] = s[j+1];
                        }
                i--;
                l--;
		}

		else if( s[i] == 'o' || s[i] == 'O' )
		{
		        for( int j=i; j<l; j++ )
                        {
                                s[j] = s[j+1];
                        }
                i--;
                l--;
		}	

		else if( s[i] == 'u' || s[i] == 'U' )
		{
		        for( int j=i; j<l; j++ )
                        {
                                s[j] = s[j+1];
                        }
                i--;
                l--;
		}
	} 

	printf("%s\n",s);
}
