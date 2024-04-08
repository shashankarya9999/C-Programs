#include<stdio.h>

struct complex
{
	float a;
	float b;
};

void complex_represent( struct complex z );
void complex_add( struct complex w1, struct complex w2 );  

int main()
{
	struct complex z1,z2;
	
	printf("Enter the real and imaginary part of first complex number: ");
	scanf("%f%f",&z1.a,&z1.b);

	complex_represent( z1 );

	printf("Enter the real and imaginary part of second complex number: ");
        scanf("%f%f",&z2.a,&z2.b);

	complex_represent( z2 );
	
	complex_add( z1, z2 );
	
	return 0;	
}

void complex_represent( struct complex z )
{
	printf("The complex number is: %f + %fi\n",z.a,z.b);
}

void complex_add( struct complex w1, struct complex w2 )
{
	printf("The sum is: %f + %fi\n",(w1.a + w2.a),(w1.b + w2.b));
}
