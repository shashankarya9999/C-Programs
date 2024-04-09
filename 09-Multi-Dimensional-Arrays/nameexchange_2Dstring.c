#include<stdio.h>

int main()
{
	char masterlist[][10] = {
                                        "aatish",
                                        "shashank",
                                        "spandan",
                                        "jolie",
                                        "priyanshu",
                                        "hero"
                                 };

	int j;
	char t;

	printf("Original: %s %s\n",&masterlist[0][0],&masterlist[1][0]);

	for( j=0; j<10; j++ )
	{
		t = masterlist[0][j];
		masterlist[0][j] = masterlist[1][j];
		masterlist[1][j] = t;
	}

	printf("New: %s %s\n",&masterlist[0][0],&masterlist[1][0]);
	
	return 0;
}
