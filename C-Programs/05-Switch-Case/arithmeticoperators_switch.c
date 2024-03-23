#include<stdio.h>

int main()

{
	int num1,num2;
	char op;

	printf("Enter the first number: ");
	scanf("%d",&num1);

	printf("Enter the second number: ");
	scanf("%d",&num2);

	printf("Enter the arithmetic operator: ");
	scanf("\n%c",&op);				// Why is it necessary to use \n before %c so that switch runs?

	switch (op)
	{
		case '+':	printf("%d + %d = %d\n",num1,num2,num1+num2);
				break;
	
		case '-':	printf("%d - %d = %d\n",num1,num2,num1-num2);
				break;
	
		case '*':	printf("%d * %d = %d\n",num1,num2,num1*num2);
				break;

		case '/':	printf("%d / %d = %f\n",num1,num2,(float)num1/num2);
				break;

		case '%':	printf("%d %% %d = %d\n",num1,num2,num1%num2);
				break;

		default:	printf("Invalid Input!\n");
				break;
		
	}

	return 0;
}
