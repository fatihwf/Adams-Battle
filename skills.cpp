#include <iostream>
#include "card.h"
#include "skills.h"
#include <vector>
using namespace std ;

void skill0() // BROMEN's skill
{
    cout << "BROMEN ADAM!" ;
}

vector<void(*)()> getSkills()
{
    vector<void(*)()> skills ;

    skills.push_back(skill0) ;

    return(skills) ;
}




