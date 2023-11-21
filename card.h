#ifndef CARDS_H
#define CARDS_H

#include <iostream>
#include <string>
#include <vector>
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

        void setHp(int newHp) ;
        void setAtk(int newAtk) ;
        void displayCard() ;
        void (*skill)() ;

        Card* readCardsFromFile(string& filename, int size);

        // 2 constructors
        Card() ;
        Card(string n, string e, string t);
};



#endif // CARDS_H
