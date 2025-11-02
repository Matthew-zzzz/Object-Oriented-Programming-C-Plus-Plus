#include "Game.h"

Game::Game()
{
}
/**
 * @brief create up to N RPG points and update names
 * with ordering. Populate live_players from 0 to n-1 as
 * all players are alive initially
 *
 * @param n: number of players
 */
 void Game::generatePlayers(int n)
 {
    for (int i=0; i< n; i++){
        players.push_back(new RPG());

        //rename players
        string new_name = "NPC_"+to_string(i);
        players[i]->setName(new_name);
        live_players.insert[i];
    }
 }

 /**
  * @brief Randomly selects a player (via index) from set
  * of alive players, live_players
  *
  * @return int: index for vector, players 
  */
  int Game::selectPlayer(){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(0, live_players.size() -1);
  
    //pick random index
    int randomIndex - dist(gen);

    // Advance iterator to that index
    set<int>:: iterator it = live_players.begin();
    advance(it, randomIndex);

    int selectedIndex = *it;
    return selectedIndex;
  }
  
  /**
   * @brief Resets winner's hits_taken to 0.
   * Removes the loser from the live_players,
   * Calls updateExpLevel() for the winner
   * Prints the structure "NPC_X won against NPC_Y"
   * 
   * @param winner : pointer to RPG winner
   * @param loser pointer to RPG winner
   * @param loserIndex : int index of loser, so that it can
   *    be removed from live_players
   */
   void Game::endRound(RPG *winner, RPG *loser, int loserIndex)
{

}
/**
 * @brief calls selectPlayer() twice to get 2 players at random. If the players
 * are redundent, make a recursive call to battleRound() and return
 * Run a round of hits across player1 and players2 until only 1 is alive.
 * Call endRound() to highlight who won and update stats
 * 
 */
 void Game::battleROund()
 {
    // Call selectPlayer twice and assign values to playerIndex1 and playerIndex2

    // if playerIndex1 and playerIndex2 are the same, call battleRound() again and
    // return within the if-statement

    // Creates two RPG + called player1 and player2 using players(playerIndex...)

    // Outside of the while loop, ID which player is alive
    // and call endRound with for the correct respective players.

 }
 
 /**
  * @brief Runs battleRound() until only one player alive
  * endRound() shrinks size of live_players
  * 
  */
  void Game::gameLoop()
  /**
   * @brief calls printStats on all players
   * 
   */

   void Game::printFinalResults()
   /**
    * @brief destroys the Game:: game object
    * 
    */

    Game::~Game()
    {
    }