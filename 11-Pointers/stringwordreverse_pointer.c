#include<stdio.h>
#include<stdlib.h>

void reverse(char *begin, char *end);

int main()
{
	char *str;
	str = ( char * )malloc( 50 * sizeof(char) );
	printf("Enter a string: ");
	fgets( str, 50, stdin );

	char *begin,*end;
	begin = end = str;
	
	printf("The reversed string is as follows:\n");
	for(; *str != '\0'; str++)
	{
		if( *str == ' ')
		{
			end = str - 1;
			reverse (begin,end);
			for(; begin<=end; begin++)  printf("%c",*begin);
			printf(" ");
			begin = end + 2;
			end = end + 2;
		}
	}
	
	end = str - 2;
	reverse(begin,end);
	
	for(; begin<=end; begin++)	printf("%c",*begin);
	printf("\n");
	
	return 0;
}

void reverse (char *begin,char *end)
{
	char ch;
	
	while(end > begin)
	{
		ch = *end;
		*end = *begin;
		*begin = ch;
		begin++;
		end--;
	}
}

