#include <iostream>
using namespace std;

#ifndef RPG_H
#define RPG_H

const int INVENTORY_SIZE =10;
const float HIT_FACTOR = 0.1;
const int MAX_HITS_TAKEN = 3;
class RPG {
 
    public:
    
    RPG(); //constructors
    RPG(string name, int hit_taken, float luck, float exp, int level);
    
    //mutators
    bool isAlive() const;
    void setHitsTaken(int new_hits);
    
    //accessors
    string getName() const;
    int getHitsTaken() const;
    float getLuck() const;
    float getExp() const;
    int getLevel() const;
// add. mutators
    void setName(string name);
    void updateExpLevel();
    void attack(RPG* opponent);
    void printStats();
    ~RPG();
    
   private:
    string name;
    int hits_taken;
    float exp;
    int level;
    float luck;


};
#endif 