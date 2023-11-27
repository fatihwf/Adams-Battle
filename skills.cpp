#include <iostream>
#include "card.h"
#include "skills.h"
#include <vector>
using namespace std ;

void skill0() // BROMEN's skill
{
    cout << "BROMEN ADAM!" ;
}

void skill0() // Leoxane
{
    
}

void skill1() // Mobayi
{
    
}

void skill2() // Jagu
{
    
}

void skill3() // Atreus
{
    
}

void skill4() // Marcus Aurelius
{
    
}

void skill5() // yusuf
{
    
}

void skill6() // Mona Lisa 
{
    
}

void skill7() // Bedocan
{
    
}

void skill8() // Lorach
{
    
}

void skill9() // Umai
{
    
}

void skill10() // Bebi
{
    
}

vector<void(*)()> getSkills()
{
    vector<void(*)()> skills ;

    skills.push_back(skill0) ;
    skills.push_back(skill1) ;
    skills.push_back(skill2) ;
    skills.push_back(skill3) ;
    skills.push_back(skill4) ;
    skills.push_back(skill5) ;
    skills.push_back(skill6) ;
    skills.push_back(skill7) ;
    skills.push_back(skill8) ;
    skills.push_back(skill9) ;
    skills.push_back(skill10) ;
    

    return(skills) ;
}




