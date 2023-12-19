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
    protected:
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
        int attack() ;
        void (*skill)() ;

        Card() ;
        // destructor
        virtual ~Card()  {}
};

class Assasin : public Card
{
    public:

        Assasin() ;

        virtual ~Assasin() {}
};


class Tank : public Card
{
    public:

        Tank() ;
        virtual ~Tank() {}


};


class Mage : public Card
{
    public:

        Mage() ;
        virtual ~Mage() {}

};


class Support : public Card
{
    public:

        Support() ;
        virtual ~Support() {}


};


class Marksman : public Card
{
    public:

        Marksman() ;
        virtual ~Marksman() {}

};



#endif // CARDS_H
