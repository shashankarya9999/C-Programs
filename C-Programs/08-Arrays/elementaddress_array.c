#include<stdio.h>

int main()

{
	int numbers[5]={ 97,68,55,67,87 };

	printf("numbers[0]= %d\n",numbers[0]);

	printf("numbers= %p\n",&numbers);

	printf("&numbers[1]= %p\n",&numbers[1]);
	
	return 0;
}
