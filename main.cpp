#include <iostream>
#include <vector>
#include "card.h"
#include <Windows.h>
#include <iostream>
using namespace std;

int displayMainMenu() ;
void viewCards(vector<Card> allCards);

int main()
{
    Assasin Leoxane("Leoxane","Fire","Assasin",1) ;


    vector<Card> allCards = {Leoxane} ;
    cout << allCards[0].name;


    // start program
    int quitVariable = 0 ;
    while(quitVariable != 1)
    {
        switch(displayMainMenu())
        {
            case 1:
                // Play vs Computer
                break;
            case 2:
                // Player vs Player
                break;
            case 3:
                // Tutorial
                break ;
            case 4:
                // display Cards
                viewCards(allCards);
                break ;
            case 5:
                // credits
                break ;
            case 6:
                cout << "\n\nExiting the game.." ;
                quitVariable = 1 ; // exit while loop and end the program
                break ;
            default:
                cout << "\nInvalid choice! Please select a number!\n" ;
                break;
        }
    }

}

int displayMainMenu()
{
    int a;

    cout << "Press the number you want to select.\n\n" ;
    cout << "1. Player vs Computer\n" ;
    cout << "2. Player vs Player\n" ;
    cout << "3. Tutorial\n" ;
    cout << "4. Cards\n" ;
    cout << "5. Credits\n" ;
    cout << "6. Quit\n\n" ;

    cin >> a ;
    return(a) ;

}

void viewCards(vector<Card> allCards)
{
    vector<Card> fire  ;
    vector<Card> water ;
    vector<Card> earth ;

    for(int i = 0; i<allCards.size(); i++)
    {
        if(allCards[i].element == "Fire")
        {
            fire.push_back(allCards[i]) ;
        }
        else if(allCards[i].element == "Water" )
        {
            water.push_back(allCards[i]) ;
        }
        else if(allCards[i].element == "Earth" )
        {
            earth.push_back(allCards[i]) ;
        }
    }

    system("cls") ;

    cout << "Select the card you want to view.\n\n" ;

    cout << "Fire Cards:  " ;
        for(int i = 0; i<fire.size(); i++)
    {
        cout << i+1 << "." << fire[i].name ;
    }

    cout << "\n" ;
    int selection ;
    cin >> selection ;

    system("cls") ;

    for(int i = 0; i<allCards.size(); i++)
    {
        if(selection == allCards[i].cardIndex)
        {
            allCards[i].displayCard() ;
            break;
        }
    }

    cin.ignore(1000,'\n') ;
    getchar() ;

}
