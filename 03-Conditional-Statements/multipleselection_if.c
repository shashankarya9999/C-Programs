#include<stdio.h>

int main()

{
	/* The week starts with sunday(0) and ends with saturday(6) */

	int day;
	printf("Enter the serial number of day: \n");
	scanf("%d",&day);
	
	if( day == 0 ) printf("Sunday \n");
	if( day == 1 ) printf("Monday \n");
	if( day == 2 ) printf("Tuesday \n");
	if( day == 3 ) printf("Wednesday \n");
	if( day == 4 ) printf("Thursday \n");
	if( day == 5 ) printf("Friday \n");
	if( day == 6 ) printf("Saturday \n");
	if( day < 0 || day > 6 ) printf("Invalid Day \n");
	
	return 0;
}





