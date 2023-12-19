#include <iostream>
#include "card.h"
#include "skills.h"
#include <string>
#include <cstdlib>
#include <algorithm>
#include <Windows.h>



using namespace std;


void Card::setHp(int newHp)
{
    hp = newHp ;
}

void Card::setAtk(int newAtk)
{
    atk = newAtk ;
}

Card::Card()
{
    this->name = "None" ;
    this->element = "None" ;
    this->setAtk(0)  ;
    this->setHp(0);
    this->cardType = "None" ;
    this->cardIndex = 99;
    this->skill = nullptr ;
}

void Card::displayCard()
{
    cout << "Name: " << this->name;
    cout << "\nType: " << this->cardType;
    cout << "\nAttack Damage: " << this->atk << " dmg";
    cout << "\nHealth:" << this->hp << " hp";
    cout << "\nSkill: " << this->skillString;
}

int Card::attack()
{
    return 1 ;
}


Assasin::Assasin() : Card()
{

}


Mage::Mage() : Card()
{

}


Tank::Tank() : Card()
{

}


Support::Support() : Card()
{

}


Marksman::Marksman() : Card()
{

}





