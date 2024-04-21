#include<stdio.h>

int main()
{
	int numStudents,counter,total,score,average;
	total = 0;
	counter = 1;
	
	printf("Enter the number of students: \n");
	scanf("%d",&numStudents);

	while( counter <= numStudents )
	{
		printf("Enter a score: \n");
		scanf("%d",&score);
		total = total + score;
		counter = counter + 1;
	}

	average = total / numStudents ;
	printf("Class Average is %d \n",average);
	
	return 0;
}
