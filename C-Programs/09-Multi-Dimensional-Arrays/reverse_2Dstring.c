#include<stdio.h>
#include<stdlib.h>

void reverse( char *str );

int main()	//work on this
{
	char *s[] =	{
				"Shashank Arya",
				"Let us C",
				"Programming paradigms"
			};

	reverse( s[0] );
	reverse( s[1] );
	reverse( s[2] );
	
	printf("The reversed strings are:\n");

	printf("%s\n",s[0]);
	printf("%s\n",s[1]);
	printf("%s\n",s[2]);
	
}

void reverse( char *str )
{
        char *begin, *end, ch;

        begin = str;

        for( ; *str != '\0'; str++ )   end = str - 1;

        while( end >= begin )
        {
                ch = *end;
                *end = *begin;
                *begin = ch;
                begin++;
                end--;
        }

        *str = '\0';
}
