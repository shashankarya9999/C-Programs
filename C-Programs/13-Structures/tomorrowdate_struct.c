#include<stdio.h>

int main()
{
    struct date
    {
        int month;
        int year;
        int day;
    };

    struct date today,tomorrow;
    static int days_per_month[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

    printf("Enter Today's date (dd mm yyyy): ");
    scanf("%d%d%d", &today.day, &today.month, &today.year);

    if(today.day != days_per_month[today.month - 1])
    {
        tomorrow.day = today.day + 1;
        tomorrow.month = today.month;
        tomorrow.year = today.year;
    }

    else if(today.month == 12)
    {
        tomorrow.day = 1;
        tomorrow.month = 1;
        tomorrow.year = today.year + 1;
    }

    else
    {
        tomorrow.day = 1;
        tomorrow.month = today.month + 1;
        tomorrow.year = today.year;
    }

    printf("Tomorrow's date (dd mm yyyy): %d/%d/%d\n", tomorrow.day, tomorrow.month, tomorrow.year);
    
    return 0;
}
