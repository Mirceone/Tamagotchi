#ifndef GAME1_HPP
#define GAME1_HPP

#include <string>

class Game1 {
private:
    std::string player;
    std::string opponent;
    std::string button;
    int playerScore;
    int opponentScore;

public:
    void playGame(const std::string& opponentName);
    
};

#endif // GAME1_HPP