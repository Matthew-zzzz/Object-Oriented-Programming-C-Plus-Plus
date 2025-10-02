#include <iostream>
#include "RPG.h"
using namespace std;

int main()
{
    RPG p1("Bear",0, 0.2, 60,1);
    RPG p2=RPG();

    printf("%s Current Stats\n", p1.getName().c_str());
    printf("Hits Taken: %i\t Luck: %f\t Exp: %f\t Level: %i\n", p1.getHitsTaken(), p1.getLuck(), p1.getExp(), p1.getLevel());

    // PRINT same p2
     printf("%s Current Stats\n", p1.getName().c_str());
    printf("Hits Taken: %i\t Luck: %f\t Exp: %f\t Level: %i\n", p2.getHitsTaken(), p2.getLuck(), p2.getExp(), p2.getLevel());

// CALL setHitsTaken_new_hit on either p1 and p2

p1.setHitsTaken(3);
p2.setHitsTaken(1);

cout << "\nP2 hits taken ";
// PRINT out the hits_taken
cout << p1.getName() << " hits taken " << p1.getHitsTaken() << "\n";

cout << p2.getName() << " hits taken " << p2.getHitsTaken() << "\n";


cout << "0 is dead, 1 is alive\n";
//call isAlive() on both p1 and p2
cout << "Is " << p1.getName() << " alive? ";
if (p1.isAlive() ==0)
{
     cout << " no\n "; }
else {
 cout << " yes\n ";
}


cout << "Is " << p2.getName() << " alive? " ;
if (p2.isAlive() ==0)
{
    cout << " no\n "; }
else {
    cout << " yes\n ";
}

return 0;
}