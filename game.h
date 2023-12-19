#pragma once  // Include guard to prevent multiple inclusion of the header

#include "card.h"
#include "deck.h"
#include "skills.h"

class Game {
public:



    Game();  // Constructor
    ~Game(); // Destructor


    void playerVsComputer(Deck &deck1, Deck &deck2);
    void playerVsPlayer();
    void selectDeck(Card** deck) ;



};
