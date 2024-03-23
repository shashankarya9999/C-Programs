#include<stdio.h>

int main()
{
	unsigned char ch;

	for( ch=0; ch<=254; ch++ )
	{
		printf("Character: %c	Ascii: %d\n",ch,ch);
	}
	return 0;
}
