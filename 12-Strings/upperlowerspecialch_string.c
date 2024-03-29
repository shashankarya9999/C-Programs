#include<stdio.h>

int uppercasecount( char *a );
int lowercasecount( char *a );
int specialchcount( char *a );


int main()
{
	char str[]="My name is Shashank Arya!\n";
	printf("%s",str);

	int uppercount= uppercasecount(str);
	int lowercount= lowercasecount(str);
	int specialcount= specialchcount(str);

	printf("Uppercase letter: %d\n",uppercount);
	printf("Lowercase letter: %d\n",lowercount);
	printf("Special characters: %d\n",specialcount);
}

int uppercasecount( char *a )
{
	int counter = 0;
	int i=0;

	while( a[i] != '\0' )
	{
		if( a[i] >= 'A' && a[i] <= 'Z' )
		{
			counter = counter + 1;
		}
		i++;
	}
	return counter;
}

int lowercasecount( char *a )
{
        int counter = 0;
        int i=0;

        while( a[i] != '\0' )
        {
                if( a[i] >= 'a' && a[i] <= 'z' )
                {
                        counter = counter + 1;
                }
                i++;
        }
        return counter;
}

int specialchcount( char *a )
{
	int counter = 0;
	int i=0;

	while( a[i] != '\0' )
	{
		if( !((a[i] >= 'A' && a[i] <= 'Z')||(a[i] >= 'a' && a[i] <= 'z')) )
		{
			counter = counter + 1;
		}
		i++;
	}
	return counter;
}


