#include <iostream>
#include "card.h"
#include <string>
using namespace std;


Card::Card(string &n, string &e, string &t)
{
    name = n ;
    element = e ;
    cardType = t ;
}


void Card::ult()
{
     hp = hp * 3 ;

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
