/*

This program takes the three co-ordinates of a triangle as inputs and then computes the area of the triangle.

*/

#include<stdio.h>
#include<math.h>

struct point 
{
	int x;
	int y;
};

float dist(struct point p, struct point p2);
float tri_area( float, float, float );

int main()
{
	struct point c1,c2,c3;
	printf("Enter the first coordinate(A): ");	
	scanf("%d%d",&c1.x,&c1.y);
	printf("Enter the first coordinate(B): ");
 	scanf("%d%d",&c2.x,&c2.y);
	printf("Enter the first coordinate(C): ");
	scanf("%d%d",&c3.x,&c3.y); 
	
	float d1 = dist( c1, c2 );
	float d2 = dist( c2, c3 );
	float d3 = dist( c3, c1 );

	printf("AB = %f\n",d1);
	printf("BC = %f\n",d2);
	printf("CA = %f\n",d3);

	if( ( d1 + d2 == d3) || ( d2 + d3 == d1 ) || ( d3 + d1 == d2 ) )
	{
		printf("Points are collinear!\n");
		printf("Area of triangle = 0\n");
	}

	else
	{
		float area = tri_area( d1, d2, d3 );
		printf("Area of triangle = %f\n",area);
	}
	
	return 0;	
}

float dist( struct point p1, struct point p2 )
{
	float d,dx,dy;
		
	dx = pow( (p2.x - p1.x),2 );
	dy = pow( (p2.y - p1.y),2 );
	d = sqrt( dx + dy );

	return d;
}   

float tri_area( float d1, float d2, float d3 )
{
	float s;

	s = ( d1 + d2 + d3 )/2;
	
	float area = sqrt( s*( s - d1 )*( s - d2 )*( s - d3 ) );
	
	return area;
}
