#include <iostream>
#include <string>
#include "RPG.h"
#include <random>

RPG::RPG(){
name = "NPC";
hits_taken =0;
luck = 0.2;
exp = 50.0;
level = 1;
}

//overloaded constructor
RPG::RPG(string name, int hits_taken, float luck, float exp, int level)
   
{this->name = name;
    this->hits_taken = hits_taken;
    this->luck = luck;
    this->exp = exp;
    this->level = level;
}

//accessors
string RPG::getName() const {
    return name;
}
int RPG::getHitsTaken() const {
    return hits_taken;
}
float RPG::getLuck() const {
    return luck;
}
float RPG::getExp() const {
    return exp;
}
int RPG::getLevel() const {
    return level;
}

//mutator
void RPG::setHitsTaken(int new_hits) {
    hits_taken = new_hits;
}
bool RPG::isAlive() const{
    return hits_taken < MAX_HITS_TAKEN;
}
/**
 * @brief updates name
 * 
 */

void RPG::setName(string name)
{
    this->name = name;
}

/**
 * @brief increate RPG experience by 50
 *      After updating, if RPG's exp is >= 100.0, Increate
 *      RPG's level by 1, reset exp to 0 and increate luck
 *       by 0.1 
 */
void RPG:: updateExpLevel(){
    exp= exp+50.0;
    if (exp>=100.0){
        level=level+1;
        exp = 0;
        luck=luck+0.1;
    }
}

/**
 * @brief Hits or misses opponent at random. Luck is a form of defense.
 * The higher the opponent's luck, more likely attack will miss.
 * If the attack is a hit, opponent's hits taken should increment by 1.
 * Add last couple of lines to complete
 * 
 */
 void RPG::attack(RPG *opponent){

    random_device rd;
    mt19937 gen(rd()); //seed with random
    uniform_real_distribution<double> dis(0.0, 1.0);

    float random_num = dis(gen);


    //Create a bool called hit
    // hit is true if random_name = HIT_FACTOR *opponent's luck
    bool hit = (random_num > HIT_FACTOR * opponent->luck);  
    if (hit) 
    {
     //cout << " attacks " << opponent->name << ".\n";
     opponent->hits_taken = hits_taken+1;
     updateExpLevel();
    }
    else 
    {
        cout << name << " whiffs their attack against " << opponent->name << ".\n";
    }
 }

/**
 * @brief prints in the foamat:
* " Name:_NPC_X Hits_Taken: X   Luck:0.X000     Exp: X0.000     Level: X        Status: Alive or dead." 
 */
 void RPG::printStats() {
    cout << "\nName: " << name << "\tHits_Taken: " << hits_taken << "\tLuck " << luck;
    cout << "\t Exp: " << exp << "\t Level: " << level;
    cout << " Status ";
    if (isAlive()){
        cout << "\tAlive "; }
    else
    {
        cout << "\tDead ";
        }
 }
 /**
  * @brief Destroy the RPG::RPG object
  * Already completed
  * 
  */
RPG::~RPG()
{
}