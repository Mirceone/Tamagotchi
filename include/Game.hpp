#ifndef GAME_HPP
#define GAME_HPP

#include <string>

class Game {
private:
    std::string player;
    std::string opponent;
    std::string button;
    int playerScore;
    int opponentScore;

public:
    void playGame(const std::string& opponentName);
    
};

#endif // GAME_HPP