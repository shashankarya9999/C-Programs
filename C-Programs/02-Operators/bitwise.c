#include<stdio.h>

int main()
{
	int a,b;

	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	
	printf("%d&%d = %d\n",a,b,a&b);
	printf("%d|%d = %d\n",a,b,a|b);
	printf("%d^%d = %d\n",a,b,a^b);
	printf("%d>>1 = %d\n",a,a>>1);
	printf("%d<<1 = %d\n",b,b<<1);
	printf("~%d = %d\n",a,~a);


	return 0;
}
