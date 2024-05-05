#include<stdio.h>

int main()
{
	int counter,score,total,average;

	total = 0;
	counter = 1;
	
	/* Priming Read */

	printf("Enter a score: \n");
	scanf("%d",&score);
	
	/* Sentinel Value = -2 */

	while( score != -2 )
	{
		total = total + score;
		counter = counter + 1;

		printf("Enter another number: ");
		scanf("%d",&score);
	}

	average = total / counter;
	printf("Class average is %d \n",average);
	
	return 0;
}
