#ifndef CARDS_H
#define CARDS_H

#include <iostream>
#include <string>
#include <vector>
#include <Windows.h>
#include <algorithm>
using namespace std;

class Card
{
    private:
        int hp  ;
        int atk  ;

    public:
        string name;
        string element;
        string cardType ;
        int cardIndex ;
        string skillString;

        void setHp(int newHp) ;
        void setAtk(int newAtk) ;
        void displayCard() ;
        void (*skill)() ;


        // 2 constructors
        Card() ;
        Card(string n, string e, string t, int i);
};

void viewCards(Card* cards, int size) ;

#endif // CARDS_H
