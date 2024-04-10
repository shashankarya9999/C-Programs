#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char *names[6]; // (2D array of pointers) can take 6 names at most

	char n[50]; // names are stored in this

	int len;
	char *p;
		
	for( int i=0; i<=5; i++ )
	{
		printf("Enter name: ");	
		scanf("%s",n);
		len = strlen(n);
		p = (char *)malloc(len+1); // to accommodate '\0'
		strcpy( p, n );	// copies string p to n
		names[i] = p;	// base address of name string stored in array of pointers
	} 

	for(int i=0; i<=5; i++)
	{
		printf("%d th names: %s\n",i,names[i]);
	}
	
	return 0;
}
