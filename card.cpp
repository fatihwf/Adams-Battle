#include <iostream>
#include "card.h"
#include "skills.h"
#include <string>
#include <cstdlib>
#include <algorithm>
#include <iomanip>
#include <Windows.h>


using namespace std;



Card::Card(string n, string e, string t, int i) :
    name(n), element(e), cardType(t), cardIndex(i)
{

}

Card::Card()
{
    this->name = "None" ;
    this->element = "None" ;
    this->atk = 0 ;
    this->hp = 0;
    this->cardType = "None" ;
    this->cardIndex = 99;
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
    cout << "Name: " << this->name;
    cout << "\nAttack: " << this->atk;
    cout << "\nHp:" << this->hp;
    cout << "\nSkill: " << this->skillString;
}

void viewCards(Card* cards, int cardsSize)
{

    Card* fire = new Card[10] ;
    Card* water = new Card[10] ;
    Card* earth = new Card[10] ;

    int f = 0; // fire cards counter
    int w = 0; // water cards counter
    int e = 0; // earth cards counter

    for(int i = 0; i<cardsSize; i++)
    {
        if(cards[i].element == "fire")
        {
            fire[f] = cards[i] ;
            f++;
        }
        else if(cards[i].element == "water")
        {
            water[w] = cards[i] ;
            w++;
        }
        else if(cards[i].element == "earth")
        {
            earth[e] = cards[i] ;
            e++;
        }
    }

        // display cards using setw


        cout << setw(17) << left << "Fire Cards" << setw(28) << left << "Water Cards" << setw(37) << left << "Earth Cards" << endl ;

        int x=0,y=0,z=0;


        while((x<f) && (y<w) && (z<e))
        {
            if(x<f)
            {
                cout << x+1 << "." << setw(17) << left <<fire[x].name ;
                x++ ;
            }
            else
            {
                cout << setw(17) << left << " " ;
            }

            if(y<w)
            {
                cout << f+y+1 << "." << setw(26) << left << water[y].name ;
                y++ ;
            }
            else
            {
                cout << setw(26) << left << " " ;
            }

            if(z<e)
            {
                cout << f+w+z+1 << "." << setw(35) << left << earth[z].name ;
                z++ ;
            }
            else
            {
                cout << " " ;
            }
            cout << "\n" ;

        }

    cout << "\nSelect the number of the card you want to view (0 for returning main menu): " ;
    int s;
    cin >> s;

    while( (s<0) || (s>cardsSize) )
    {
        cout << "\ninvalid choice please try again.\n" ;
        cout << "\nSelect the number of the card you want to view (0 for returning main menu): " ;
        cin >> s;
    }

    if(s==0)
    {
        return;
    }

    system("cls") ;

    for(int i=0; i<cardsSize; i++)
    {
        if(cards[i].cardIndex == s)
        {
            cards[i].displayCard();
            break;
        }
    }

    cout << "\nPress anything to return: ";
    cin.ignore(1000,'\n');
    getchar() ;





    delete[] fire;
    delete[] water;
    delete[] earth;
}

