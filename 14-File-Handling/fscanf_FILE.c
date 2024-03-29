#include<stdio.h>

int main()
{
	FILE *f;
	char name[10];
	int age;
	float cgpa;
	f = fopen("input.txt","r");
	fscanf(f, "%s %d %f", name, &age, &cgpa);
	printf("Name = %s, Age = %d, CGPA = %f\n",name, age, cgpa);
	fclose( f );

	return 0;
}
