#include <iostream>
#include <string>
using namespace std;



class Card
{
    private:
        int hp  ;
        int atk  ;
    public:
        string name;
        string element;
        string cardType ;
    public:
        void setHp(int newHp) ;
        void setAtk(int newAtk) ;
        void displayCard() ;
        void ult() ;

        Card() = default ;
        Card(string& n, string& e, string& t);
};



