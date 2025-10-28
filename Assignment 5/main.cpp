#include <iostream>
#include "Vanillite.h"
using namespace std;
int main()
{
    //Vanillite first = Vanillite();
    vector<string> pokemonType;
    pokemonType.push_back("Ice");

    vector<string> skills; 
    skills.push_back("Harden");
    skills.push_back("Tackle");

    cout << "--------Constructor Created------\n";
    Vanillite charlie = Vanillite("Charlie", 100, 4, 4, pokemonType, skills);
    // Vanillite
    cout << "\n-------Direct Speak------------\n";
    charlie.speak();
    // Pokemon pointer to Vanillite
    Pokemon * p1 = &charlie;
    cout << "\n ------ Speak called from Pokemon Point ----\n";
    (*p1).speak();
    // Vanillite pointer to Vanillite
    Vanillite * c1 = &charlie ; 
    cout << "\n-------- Speak called from Vanilltie-----";
    (*c1).speak();
    // Vanillite
    cout << "\n------- Print Stats-------\n";
    charlie.printStats();
}
