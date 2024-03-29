#include<stdio.h>
#include<string.h>

int main()
{
	char str1[]="Shashank";
	char str2[]="Arya";
	char str3[20];

	printf("First String: %s\n",str1);
	printf("Second String: %s\n",str2);
	
	printf("String length of first string = %ld\n",strlen(str1));
	printf("String length of second string = %ld\n",strlen(str2));

	strcpy( str3,str1 );

	printf("Copied String: %s\n",str3);

	printf("Concatenated String: %s\n",strcat(str1,str2));

	int flag = 1;

	flag = strcmp( str1, str2 );

	if( flag == 0 )		printf("Strings are Similar!\n");
	else			printf("Strings are Different!\n");

	return 0;
}
