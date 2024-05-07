#include<stdio.h>

int main()
{
	FILE *f;
	char *name = "Martha";
	int age = 21;
	float cgpa = 9.4;

	f = fopen( "output.txt", "w" );
	fprintf( f, "%s %d %f", name, age, cgpa );
	fclose(f);

	return 0;
}
