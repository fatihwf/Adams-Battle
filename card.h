#ifndef CARD_H
#define CARD_H
#include <string>
#include <iostream>

using namespace std;

class Card
{
    protected:
        int hp  ;
        int atk  ;

    public:
        string name;
        string element;
        string cardType ;
        int cardIndex ;

        Card(string n = "" , string e = "", string cardT = "" ,int cardI = 99) ;
        Card(const Card &source) ;

        void displayCard() ;

        virtual ~Card() = default ;

};

class Assasin : public Card
{
    public:
        Assasin(string n = "" , string e = "", string cardT = "" ,int cardI = 99) ;
        Assasin(const Assasin &source) ;

        virtual ~Assasin() override = default;
};









#endif // CARD_H





