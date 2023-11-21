#include <iostream>
#include "card.h"
#include <string>



using namespace std;

Card::Card(string n, string e, string t) :
    name(n), element(e), cardType(t)
{

}

Card::Card()
{
    this->name = "None" ;
    this->element = "None" ;
    this->atk = 0 ;
    this->hp = 0;
    this->cardType = "None" ;
    this->skill = nullptr ;
}

void Card::setHp(int newHp)
{
    hp = newHp ;
}

void Card::setAtk(int newAtk)
{
    atk = newAtk ;
}

void Card::displayCard()
{
    cout << "\nHp: " << hp << "\nAttack: " << atk ;
}


