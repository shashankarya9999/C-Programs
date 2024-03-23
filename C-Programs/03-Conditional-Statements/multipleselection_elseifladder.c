#include<stdio.h>

int main()

{
	int day;
	printf("Enter the serial number of the day: \n");
        scanf("%d",&day);
	
	if( day == 0 ) printf("Sunday \n");
 	else if( day == 1 ) printf("Monday \n");
 	else if( day == 2 ) printf("Tueday \n");
 	else if( day == 3 ) printf("Wednesday \n");
 	else if( day == 4 ) printf("Thursday \n");
 	else if( day == 5 ) printf("Friday \n");
 	else if( day == 6 ) printf("Saturday \n");
	else printf("Invalid Day \n");
	 	
	return 0;

}
