#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void shuffle( int wDeck[][13] );
void deal( const int wDeck[][13], const char *wFace[], const char *wSuit[] );

int main()
{
    // initialize suit array
    const char *suit[4] = { "Hearts", "Diamonds", "Clubs", "Spades" };

    // initialize face array
    const char *face[13] =  { "Ace", "Two", "Three", "Four",
                              "Five", "Six", "Seven", "Eight",
                              "Nine", "Ten", "Jack", "Queen", "King"
                            };

    // initialize deck array
    int deck[4][13] = { 0 };

    // seed random-number generator
    srand(time(0)); 

    // shuffle the deck
    shuffle( deck );

    // deal the deck
    deal( deck, face, suit );

    return 0;
}

// shuffle cards in deck
void shuffle( int wDeck[][13] )
{
    int row;
    int column;
    int card;

    // for each of the 52 cards, choose slot of deck randomly
    for( card = 1; card <= 52; card++ )
    {
        // choose new random location until unoccupied slot found
        do
        {
            row = rand() % 4;
            column = rand() % 13;
        } while( wDeck[row][column] != 0 );

        // place card number in chosen slot of deck
        wDeck[row][column] = card;        
    }
}

void deal( const int wDeck[][13], const char *wFace[], const char *wSuit[] )
{
    int card;
    int row;
    int column;

    // deal each of the 52 cards
    for( card = 1; card <= 52; card++ )
    {
        // loop through rows of wDeck
        for( row = 0; row <= 3; row++ )
        {
            // loop through columns of wDeck for current row
            for( column = 0; column <= 12; column++ )
            {
                // if slot contains current card, display card
                if( wDeck[row][column] == card )
                {
                    printf("%5s of %-8s%s", wFace[column], wSuit[row], card % 2 == 0 ? "\n" : "\t");
                }
            }
        }
    }
}