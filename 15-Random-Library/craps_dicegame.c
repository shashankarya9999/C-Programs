/*****************************************************************CRAPS****************************************************************************

One of the most popular game of chance is a dice game known as "craps", which is played in casinos and back alleys throughout the world. The rules of the game are:

- A player rolls a six-faced dice containing 1, 2, 3, 4, 5 and 6 spots. After the dice have come to a rest, the sum of the spots on the two upward face is calculated
- If the sum is 7 or 11 on the first throw, the player wins 
- If the sum is 2, 3, or 12 on the first throw( called "craps" ), the player loses(i.e., the "house" wins )
- If the sum is 4, 5, 6, 8, 9, or 10 on the first throw, then that sum becomes the player's "point"
- To win, you must continue rolling the dice until you "make your point"
- The player loses by rolling a 7 before making a point

**************************************************************************************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

// enumeration constants represent game status

enum status 
{
    CONTINUE, WON, LOST
};

int roll_dice(void); // function prototype

int main()
{
    int sum; // sum of rolled dice
    int my_point; // points earned

    enum status game_status; // can contain CONTINUE, WON, or LOST

    srand( time(NULL) ); // randomize random number generator using current time

    sum = roll_dice();

    // determine game status based on sum of dice

    switch(sum)
    {
        // win on first roll

        case 7:
        case 11:
            game_status = WON;
            break;

        // lose on first roll

        case 2:
        case 3:
        case 12:
            game_status = LOST;
            break;

        // remember point

        default:
            game_status = CONTINUE;
            my_point = sum;
            printf("Point is %d\n", my_point);
            break;
    }

    while(game_status == CONTINUE)
    {
        sum = roll_dice(); // roll dice again

        // determine game status

        if(sum == my_point)
        {
            game_status = WON;
        } 

        else if(sum == 7) // lose by rolling 7
        {
            game_status = LOST; // game over, player lost
        }
    }

    // display won or lost message

    if(game_status == WON)
    {
        printf("Player wins!\n");
    }

    else
    {
        printf("Player loses\n");
    }

    return 0;
}

int roll_dice(void)
{
    int die1;
    int die2;
    int work_sum;

    die1 = 1 + ( rand() % 6 ); // pick random die1 value
    die2 = 1 + ( rand() % 6 ); // pick random die2 value
    work_sum = die1 + die2;

    // display result of this roll

    printf("Player rolled %d + %d = %d\n", die1, die2, work_sum);

    return work_sum; // return sum of dice
}