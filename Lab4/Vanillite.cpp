#include <iostream>
#include <stdio.h>
#include "Vanillite.h"
/** 
*@brief Construct a new Vanillite:: Vanillite object
* 
*@param name
* @param hp
* @param att
* @param def
* @param t
 */
 Vanillite::Vanillite() : Pokemon() {
    type.push_back("Ice");
    skills.push_back("Harden");
    skills.push_back("Tackle");

    cout << "Default Constructor (Vanillite)\n";
}

/**
 * @brief *
 *
 * @param name
 * @param hp
 * @param att
 * @param def
 * @param t
 * 
 */
Vanillite::Vanillite(string name, int hp, int att, int def, vector <string> t, vector<string> s):
Pokemon(name, hp, att, def, t) 
 {   type = t;
    skills = s;
    cout << "Overloaded Constructor (Charmanger)\n";
}
/**
 * @brief says what Vanillite says
 * 
 */
 void Vanillite::speak(){
    cout << "Van illite\n";
 }

/**
 * @brief calls printStats from Parent class (pokemon)
 *  
 */
 void Vanillite::printStats(){
    Pokemon::printStats();
    cout << "Skills: ";
    for (int i=0; i< skills.size(); i++){
        cout << skills[i] << "\t";
    }
    cout << endl;
 }