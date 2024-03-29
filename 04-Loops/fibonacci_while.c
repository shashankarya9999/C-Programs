#include<stdio.h>

int main()

{
	int a=1,b=0;
	int n,c;

	printf("Enter number of terms: ");
	scanf("%d",&n);

	int i=1;
	
	while( i<=n )
	{
		c=a+b;
		a=b;
		b=c;

		printf("%d ",a);
	
		i=i+1;
	}

	printf("\n");

	return 0;
}
