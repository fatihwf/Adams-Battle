#include "card.h"
#include "skills.h"
#include <iostream>
#include <fstream>
#include <string>
#define SIZE 12  // how many cards do we have

using namespace std;

int main()
{
    // functions
    int displayMainMenu() ;
    void viewCards(Card* cards,int size) ;
    void assignSkills(Card* cards, vector<void (*)()> &skills) ;
    vector<void(*)()> getSkills() ;
    Card* readCardsFromFile(const string& filename, int size) ;



    // get card array
    Card* cards = readCardsFromFile("cards.txt", SIZE);

    // get skill vector
    vector<void(*)()> skills = getSkills() ;

    // assign skill to each card
    assignSkills(cards,skills) ;





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
                viewCards(cards,SIZE) ;
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

void assignSkills(Card* cards, vector<void (*)()> &skills)
{
    for (int i = 0; i < SIZE; i++)
    {
        cards[i].skill = skills[i];
    }
}

Card* readCardsFromFile(const string& filename, int size)
{
    ifstream cardFile(filename);

    if (!cardFile.is_open())
    {
        cerr << "Error opening the file!" << endl;
        return nullptr;
    }

    Card* cards = new Card[size] ;

    for (int i = 0; i < size; i++)
    {
        getline(cardFile, cards[i].name, '\t');
        getline(cardFile, cards[i].element, '\t');
        getline(cardFile, cards[i].cardType, '\t');
        cardFile >> cards[i].cardIndex ;
        getline(cardFile, cards[i].skillString, '\n') ;


    }

    cardFile.close();

    return cards;
}
