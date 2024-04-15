#include<stdio.h>
#include<math.h>

int main()
{
	int a,n,x;

	printf("Enter number and exponent: ");
		
	scanf("%d%d",&a,&n);
	
	x = pow(a,n);

	printf("%d ^ %d = %d\n",a,n,x);

	return 0;
}
