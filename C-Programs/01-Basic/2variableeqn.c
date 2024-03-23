#include<stdio.h>

int main()
{
	float a1,a2,b1,b2,c1,c2;

	printf("Enter a, b, c for first equation: ");
	scanf("%f%f%f",&a1,&b1,&c1);

	printf("The first equation: (%f)x + (%f)y = (%f)\n",a1,b1,c1);

	printf("Enter a, b, c for second equation: ");
        scanf("%f%f%f",&a2,&b2,&c2);

        printf("The second equation: (%f)x + (%f)y = (%f)\n",a2,b2,c2);

	printf("x = %f\n",(b1*c2 - b2*c1)/(a2*b1 - a1*b2));
	printf("y = %f\n",(a2*c1 - a1*c2)/(a2*b1 - a1*b2));

	return 0;
}
