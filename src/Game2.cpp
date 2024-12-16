#include "../include/Game.hpp"
#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>

using namespace std;

void Game::playGame(const std::string& opponentName){
    cout << "In this game " << opponentName << " will hide in the left or the right side of the screen." << endl;
    cout << "Make your choice: write 'L' if you think that they're on the left side or 'R' for the right side." << endl;
    cout << "The winner will be decided after five rounds." << endl;

    playerScore = 0;
    opponentScore = 0;

    cout << "Type 'START' to start the game!" << endl;
    cin >> button;

    if (button != "START") {
        cout << "Game not started!" << endl;
        return;
    }

    srand(time(0));

    while (true) { 
        cout << "Enter L or R: ";
        cin >> player;

        if (player != "L" && player != "R") {
            cout << "Invalid input. Please enter 'L' or 'R'." << endl;
            continue;
        }

        opponent = (rand() % 2 == 0) ? "L" : "R";

        cout << opponentName << " is in the " 
             << (opponent == "L" ? "left" : "right") << " side." << endl;

        if (player == opponent) playerScore++;
        else opponentScore++;

        cout << "Current score:" << endl;
        cout << "Player: " << playerScore << " | " << opponentName << ": " << opponentScore << endl;
        cout << endl;

        if (playerScore == 5 || opponentScore == 5) break;
    }

    cout << endl;
    if (playerScore > opponentScore) cout << "Player wins!" << endl;
    else cout << opponentName << " wins!" << endl;

    cout << "Final score:" << endl;
    cout << "Player: " << playerScore << " | " << opponentName << ": " << opponentScore << endl;
}