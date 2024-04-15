#include<stdio.h>
#include<math.h>

int main()
{
	float a,b,c,D;

	printf("Enter coefficient of x^2, x and c: ");
	scanf("%f%f%f",&a,&b,&c);

	if( a == 0 )	printf("Not a quadratic equation!\n");

	else
	{
	printf("The entered quadratic equation: (%f)x^2 + (%f)x + (%f) = 0\n",a,b,c);

	D = ((b*b) - (4*a*c));
	
	float x11, x12, x21, x22;

	if( D > 0 )
	{
		x11 = (-b)/(2*a);
                x12 = (sqrt(D))/(2*a);
               
		printf("The roots are real.\n");
		printf("The 1st root is: %f + %f = %f\n",x11,x12,(x11+x12));
		printf("The 2nd root is: %f - %f = %f\n",x11,x12,(x11-x12));
		printf("Discrimiant = %f\n",D);
	}

	else if( D == 0 )
	{
		x11 = (-b)/(2*a);

		printf("The roots are real and equal.\n");
		printf("The real repeated root is: %f\n",x11);
		printf("Discriminant = %f\n",D);
	}

	else
	{
		x11 = (-b)/(2*a);
        	x12 = (sqrt(-D))/(2*a);
		
		printf("The roots are imaginary.\n");
		printf("The 1st root is: %f + %f i\n",x11,x12);
		printf("The 2nd root is: %f - %f i\n",x11,x12);
		printf("Discriminant = %f\n",D);
	}

		printf("Sum of roots = %f\n",((-b)/(a)));
		printf("Product of roots = %f\n",(c/a));
		printf("Vertex of Parabola: ( %f, %f )\n",((-b)/(2*a)),((-D)/(4*a)));
	}

	return 0;
}
