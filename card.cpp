#include "card.h"
#include <string>
#include <iostream>
using namespace std;


Card::Card(string n, string e, string cardT,int cardI )
{
    // Card Constructor

    name = n;
    element = e;
    cardType = cardT ;
    cardIndex = cardI ;
}

Card::Card(const Card &source)
{
    name = source.name;
    cardType = source.cardType;
    element = source.element;
    cardIndex = source.cardIndex ;
}

Assasin::Assasin(string n  , string e , string cardT,int cardI  ) : Card(n,e,cardT,cardI)
{

}

Assasin::Assasin(const Assasin &source) : Card(source)
{

}

void Card::displayCard()
{
    cout << "name: " << this->name;
    cout << "\ncard type: " << this->cardType;
    cout << "\nelement: " << this->element;

}


