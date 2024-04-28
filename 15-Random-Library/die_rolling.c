/*

Randomizing die-rolling program

*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i;
    unsigned seed; // number used to seed random number generator

    printf("Enter Seed: ");
    scanf("%u",&seed);

    srand(seed); // seed random number generator

    for(i=1; i <= 10; i++)
    {
        printf("%10d", 1 + ( rand() % 6 ));

        if( i % 5 == 0 )
        {
            printf("\n");
        }
    }

    return 0;
}
