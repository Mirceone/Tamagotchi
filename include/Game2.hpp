#ifndef GAME2_HPP
#define GAME2_HPP

#include <string>

class Game2 {
private:
    std::string player;
    std::string opponent;
    std::string button;
    int playerScore;
    int opponentScore;

public:
    void playGame(const std::string& opponentName);
    
};

#endif // GAME2_HPP