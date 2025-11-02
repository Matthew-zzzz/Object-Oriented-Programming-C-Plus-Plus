#include <iostream>
using namespace std;

#ifndef GAME_H
#define GAME_H

class Game {

    public:
        Game();
        void generatePlayers(int n);
        int selectPlayer();
        void endRound(RPG* winner, RPG* loser, int loserindex);
        void battleRound();
        void gameLoop();
        void printFinalResults();
        ~Game();

    private:
        vector<RPG*> players;
        set<int> live_players;
};
#endif