#include <stdio.h>

#define FEET_PER_FANTHOM 6
#define INCHES_PER_FEET 12

int main()
{
	float inches;
	float feet;
	float fanthoms;

	/* Get the depth in fanthoms from the user */

	printf("Enter the depth in fanthoms: \n");
	scanf("%f",&fanthoms);

	feet= FEET_PER_FANTHOM*fanthoms;
	inches= INCHES_PER_FEET*feet;

	printf("Depth at sea: \n");
	printf("%f fanthoms \n",fanthoms);
	printf("%f feet \n",feet);
	printf("%f inches \n",inches);

	return 0;
}

