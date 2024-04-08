#include<stdio.h>
#include<math.h>

struct point
{
	float x;
	float y;
};

double distance( struct point, struct point );

int main()
{
	struct point c1, c2;
	
	printf("Enter the x and y coordinates of first point: ");
	scanf("%f%f",&c1.x,&c1.y);

	printf("Enter the x and y coordinates of second point: ");
	scanf("%f%f",&c2.x,&c2.y);

	printf("The first co-ordinate: x1 = %f, y1 = %f\n",c1.x,c1.y);
	printf("The second co-ordinate: x2 = %f, y2 = %f\n",c2.x,c2.y);

	double d = distance( c1,c2 );

	printf("Distance between the two points: %lf\n",d);
	
	return 0;  
}

double distance( struct point z1, struct point z2 )
{
	float d, dx, dy;
	dx = pow( ( z2.x - z1.x ), 2 );
	dy = pow( ( z2.y - z1.y), 2 );
	d = sqrt( dy + dx );

	return d;  
}
