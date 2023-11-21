#include "card.h"
#include <iostream>
#include <fstream>
#include <string>
#define SIZE 10  // how many cards do we have

using namespace std;

int main()
{
    int quitVariable = 0 ;
    int displayMainMenu() ;

// Start reading cards
    string name,element,cardType ;

    Card* cards = new Card[SIZE] ;

    ifstream cardFile ("cards.txt") ;

    if (!cardFile.is_open())
    {
        cout << "Error opening the file!" << endl;
        return 1;
    }

    for(int i=0; i<SIZE; i++)
    {
        getline(cardFile,name,'\t') ;
        getline(cardFile,element,'\t') ;
        getline(cardFile,cardType,'\n') ;

        cards[i] = Card(name,element,cardType) ;
    }

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


    delete[] cards ;
    cardFile.close() ;

    return(0) ;
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
