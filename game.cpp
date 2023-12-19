#include "game.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <Windows.h>

using namespace std;
Game::Game()
{

}

Game::~Game()
{

}

void Game::playerVsComputer(Deck &deck1, Deck &deck2)
{

    srand(time(0)) ;
    int turn = 1;
    vector<Card*> hand1 ;
    vector<Card*> hand2 ;

    vector<Card*> field1 ;
    vector<Card*> field2 ;

    for (int i=0; i<7; i++)
    {
        hand1.push_back(deck1.deck[i]) ;
        hand2.push_back(deck2.deck[i]) ;
    }

    system("cls") ;

    for(int i=5; i>0; i--)
    {
        cout << "Game will start in " << i << " seconds. Get ready.\n" ;
        Sleep(1000) ;
    }

    // start game







}

void Game::selectDeck(Card** deck)
{
    vector<Card**> decks ;
    system("cls") ;
    cout << "Select your deck.\n\n" ;
    cout << "1.Deck A: " ;
    for(int i = 0; i<7; i++)
    {

    }
}
void Game::playerVsPlayer()
{

}
