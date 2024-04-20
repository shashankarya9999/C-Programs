#include<stdio.h>
#include<math.h>

int main()
{
	float a,b,g,f,c;
	
	printf("Enter coefficient of x^2, y^2, x, y, c: ");
	scanf("%f%f%f%f%f",&a,&b,&g,&f,&c);

	if( a != b )	printf("Not a circle!\n");
	else
	{
		float R = g*g + f*f - c;
		
		if( R > 0 )		printf("The radius is: %f\n",sqrt(R));
		
		else if( R == 0 )	printf("The circle is a unit circle\n");

		else			printf("The circle is imaginary\n");
	}

	printf("The centre is: ( -%f, -%f )\n",g,f);
	
	return 0;
}
