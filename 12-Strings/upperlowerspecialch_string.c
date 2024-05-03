#include<stdio.h>

int uppercasecount( char *a );
int lowercasecount( char *a );
int specialchcount( char *a );

int main()
{
	char str[]="My name is Shashank Arya!\n";
	printf("%s",str);

	int uppercount = uppercasecount(str);
	int lowercount = lowercasecount(str);
	int specialcount = specialchcount(str);

	printf("Uppercase letter: %d\n",uppercount);
	printf("Lowercase letter: %d\n",lowercount);
	printf("Special characters: %d\n",specialcount);

	return 0;
}

int uppercasecount( char *a )
{
	int u_counter = 0;
	int i=0;

	while( a[i] != '\0' )
	{
		if( a[i] >= 'A' && a[i] <= 'Z' )
		{
			u_counter = u_counter + 1;
		}
		
		i++;
	}
	
	return u_counter;
}

int lowercasecount( char *a )
{
        int l_counter = 0;
        int i=0;

        while( a[i] != '\0' )
        {
                if( a[i] >= 'a' && a[i] <= 'z' )
                {
                        l_counter = l_counter + 1;
                }
		
                i++;
        }
	
        return l_counter;
}

int specialchcount( char *a )
{
	int s_counter = 0;
	int i=0;

	while( a[i] != '\0' )
	{
		if( !( ( a[i] >= 'A' && a[i] <= 'Z' ) || ( a[i] >= 'a' && a[i] <= 'z' ) ) )
		{
			s_counter = s_counter + 1;
		}
		
		i++;
	}
	
	return s_counter;
}


