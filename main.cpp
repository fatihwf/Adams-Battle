#include "card.h"
#include "skills.h"
#include "game.h"
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <vector>
#define CARDCOUNT 12  // how many cards do we have

using namespace std;
typedef void (*FunctionPointer)(); // void function pointer type

    // functions
int displayMainMenu() ;
int credits() ;
void viewCards(Card** cards,int size) ;
void assignSkills(Card** cards, FunctionPointer* skills, int size) ;
void readCardsFromFile(const string& filename,Card** cards ,int size) ;




int main()
{

    // get card array dynamically

    Card** cards = new Card*[CARDCOUNT] ;
    readCardsFromFile("cards.txt",cards,CARDCOUNT);

     // get skills array dynamically. skills is a function pointer array
    FunctionPointer* skills = new FunctionPointer[CARDCOUNT];
    getSkills(skills,CARDCOUNT) ;  // skills.h

    // assign skill to each card
    assignSkills(cards,skills,CARDCOUNT) ; // skills.h



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
                viewCards(cards,CARDCOUNT) ;
                break ;
            case 5:
                // credits
                credits() ;
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


    // Deallocate Memory
    for(int i = 0; i<CARDCOUNT; i++)
    {
        delete cards[i];
    }
    delete[] cards ;



    delete[] skills;

    return(0) ;
}

int displayMainMenu()
{
    int a;
    system("cls") ;
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



void readCardsFromFile(const string& filename, Card** cards ,int size)
{
    ifstream cardFile(filename);

    if (!cardFile.is_open())
    {
        cerr << "Error opening the file!" << endl;
    }


    int i;
    string cardtype ;

    for(i = 0; i<size; i++)
    {

        getline(cardFile, cardtype, '\t');

        if(cardtype == "Assasin")
        {
            cards[i] = new Assasin();
        }
        else if(cardtype == "Tank")
        {
            cards[i] = new Tank();

        }
        else if(cardtype == "Mage")
        {
            cards[i] = new Mage();

        }
        else if(cardtype == "Marksman")
        {
            cards[i] = new Marksman();

        }
        else if(cardtype == "Support")
        {
            cards[i] = new Support();

        }
        else
        {
            continue;
        }

        int hp, atk ;
        cards[i]->cardType = cardtype ;
        getline(cardFile, cards[i]->element, '\t');
        getline(cardFile, cards[i]->name, '\t');
        cardFile >> cards[i]->cardIndex ;
        cardFile >> ws;
        cardFile >> hp;
        cardFile >> ws;
        cardFile >> atk;
        cardFile >> ws;
        getline(cardFile, cards[i]->skillString, '\n') ;

        cards[i]->setAtk(atk) ;
        cards[i]->setHp(hp) ;


    }

    cardFile.close();

}

void tutorial()
{
    system("cls") ;
    cout << "Welcome to tutorial. Select the topic you want to learn.\n\n" ;

    cout << "1. Card Types" ;
    cout << "Creating a deck" ;

}

void viewCards(Card** cards, int cardsSize)
{
    vector<Card*> fire;
    vector<Card*> water;
    vector<Card*> earth;

    int f = 0; // fire cards counter
    int w = 0; // water cards counter
    int e = 0; // earth cards counter

    for(int i = 0; i<cardsSize; i++)
    {
        if(cards[i]->element == "fire")
        {
            fire.push_back(cards[i]) ;
            f++;
        }
        else if(cards[i]->element == "water")
        {
            water.push_back(cards[i]) ;
            w++;
        }
        else if(cards[i]->element == "earth")
        {
            earth.push_back(cards[i]) ;
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
                cout << x+1 << "." << setw(17) << left <<fire[x]->name ;
                x++ ;
            }
            else
            {
                cout << setw(17) << left << " " ;
            }

            if(y<w)
            {
                cout << f+y+1 << "." << setw(26) << left << water[y]->name ;
                y++ ;
            }
            else
            {
                cout << setw(26) << left << " " ;
            }

            if(z<e)
            {
                cout << f+w+z+1 << "." << setw(35) << left << earth[z]->name ;
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
        cout << "\ninvalid choice please try again->\n" ;
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
        if(cards[i]->cardIndex == s)
        {
            cards[i]->displayCard();
            break;
        }
    }

    cout << "\n\n\nPress anything to return:\n";
    cin.ignore(1000,'\n');
    getchar() ;

    fire.clear();
    water.clear();
    earth.clear();

    viewCards(cards,cardsSize);

}

int credits()
{
    system("cls") ;
    cout << "Developers\n" << endl;
    cout << "Kaan Aydemir" << endl;
    cout << "Edip Alper Selcuk" << endl;
    cout << "Fatih Gazi Goc" << endl;



    cout << "\n\nPress anything to return main menu\n" ;
    cin.ignore(1000,'\n') ;
    getchar() ;

    return 0;
}
