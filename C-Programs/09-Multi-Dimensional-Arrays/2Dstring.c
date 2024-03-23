#include<stdio.h>
#include<string.h>

#define FOUND 1
#define NOTFOUND 0

int main()
{
	char masterlist[7][10] = {
					"uma",
					"shashank",
					"spandan",
					"jolie",
					"hero",
					"priyanshu",
					"aatish"
				 };

	int flag, i, a;
	char yourname[10];
	printf("See if you can enter the palace!\n");
	printf("Enter your name(all lowercase please!): ");
	scanf("%s",yourname);

	flag = NOTFOUND;
	for( i=0; i<6; i++ )
	{
		a = strcmp( &masterlist[i][0], yourname );
		if( a == 0 )
		{
			printf("Welcome! You can enter the palace!\n");
			flag = FOUND;
			break;
		}
	}
	if( flag == NOTFOUND )		printf("Trespassers will be used for science experiments!\n");
	return 0;
}
