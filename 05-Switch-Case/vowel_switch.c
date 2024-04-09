#include<stdio.h>

int main()
{
	char ch;
	printf("Enter an English alphabet: ");
	scanf("%c",&ch);
	
	printf("The entered character is: \n");	
	
	switch( ch )
	{
		case 'a':
			  printf("Vowel\n");
			  break;
		
		case 'e':
                          printf("Vowel\n");
                          break;
		
		case 'i':
                          printf("Vowel\n");
                          break;

		case 'o':
                          printf("Vowel\n");
                          break;

		case 'u':
                          printf("Vowel\n");
                          break;

		default:
                          printf("Consonant\n");
                          break;
	}
	
	return 0;
}
