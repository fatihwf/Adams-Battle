#ifndef  DECK_H
#define  DECK_H
#include "card.h"

class Deck
{
public:

    Deck(Card* deck[]) : deck(deck) {}

    Card** deck;

    ~Deck()
    {
        delete[] deck;
    }
};


#endif // DECK_H
