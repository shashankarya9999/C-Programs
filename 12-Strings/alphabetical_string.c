#include<stdio.h>
#include<string.h>

void alpha_sort( char [], int );

int main()
{
	char str[20];
	printf("Enter a string: ");
	fgets( str, 20, stdin );

	alpha_sort( str, strlen(str) );	
	 
	return 0;
}

void alpha_sort( char b[], int m )
{
        int i,j,temp = 0;

        for( i=0; i<=m-2; i++ )
        {
                for( j=0; j<=m-i-2; j++ )
                {
                        if( b[j] > b[j+1] )
                        {
                                temp = b[j];
                                b[j] = b[j+1];
                                b[j+1] = temp;
                        }
                } 
        }

	printf("The sorted array: %s\n",b);
}
