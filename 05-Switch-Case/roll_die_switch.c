/*

Roll a six-sided die 8000 times

*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int freq1 = 0; // rolled 1 counter
    int freq2 = 0; // rolled 2 counter
    int freq3 = 0; // rolled 3 counter
    int freq4 = 0; // rolled 4 counter
    int freq5 = 0; // rolled 5 counter
    int freq6 = 0; // rolled 6 counter

    int roll; // roll counter, value 1 to 6000

    int face; // represents one roll of the die, value 1 to 6

    for(roll = 1; roll <= 8000; roll++)
    {
        face = 1 + rand() % 6; // random number from 1 to 6

        switch(face)
        {
            case 1:
                ++freq1;
                break;

            case 2:
                ++freq2;
                break;

            case 3:
                ++freq3;
                break;

            case 4:
                ++freq4;
                break;

            case 5:
                ++freq5;
                break;

            case 6:
                ++freq6;
                break;
        }
    }

    printf("%s%13s\n", "Face", "Frequency");
    printf("   1%13d\n", freq1);
    printf("   2%13d\n", freq2);
    printf("   3%13d\n", freq3);
    printf("   4%13d\n", freq4);
    printf("   5%13d\n", freq5);
    printf("   6%13d\n", freq6);

    return 0;
}