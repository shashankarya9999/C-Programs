#include<stdio.h>

int main()
{
	char *names[] = 	 {
                                        "aatish",
                                        "shashank",
                                        "spandan",
                                        "jolie",
                                        "priyanshu",
                                        "hero"
                                 };

	char *temp;
	printf("Original: %s %s\n",names[0],names[1]);
	temp = names[0];
	names[0] = names[1];
	names[1] = temp;

	printf("New: %s %s\n",names[0],names[1]);
	return 0;
}
