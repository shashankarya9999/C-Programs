#include<stdio.h>

int main()
{
	int celsius,fahrenheit;
	float cel_to_feh, feh_to_cel;
	
 	printf("Enter temperature in Celsius: ");
	scanf("%d",&celsius);
	printf("Enter temperature in Fahrenheit: ");
	scanf("%d",&fahrenheit);
	
	cel_to_feh = (float)((9 * celsius + 160) / 5);
	feh_to_cel = (float)(5*(fahrenheit - 32))/9;

	printf("Fahrenheit = %d; Celsius = %f\n", fahrenheit, feh_to_cel);
	printf("Celsius = %d; Fahrenheit = %f\n", celsius, cel_to_feh);

	return 0;
} 

