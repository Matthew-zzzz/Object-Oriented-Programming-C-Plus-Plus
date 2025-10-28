#ifndef VANILLITE_H
#define VANILLITE_H

#include <string>
#include <vector>
#include "Pokemon.h"
using namespace std;

class Vanillite : public Pokemon{
    public:
        // constructors
        Vanillite();
        Vanillite(string name, int hp, int att, int def, vector<string> t, vector<string> s);
        // mutators
        void speak() /* overide*/;
        void printStats() /*override*/;
    
    private:
    vector<string> skills;
    /* name, hp, attack, defense*/

};
#endif