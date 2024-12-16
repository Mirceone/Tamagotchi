#include "../include/Game.hpp"
#include <iostream> 
#include <string>
#include <cstdlib> 
#include <ctime> 

using namespace std;

void Game::playGame(const string& opponentName) {
    cout << "In this fun twist on the classic game, you play Rock, Paper, Scissors against " << opponentName << ".";
    cout << "Here is how it works:" <<endl;
    cout << "Make your choice: write rock, paper or scissors; " << endl;
    cout << opponentName << " will make it's choice." << endl;
    cout << "The winner will be decided after five rounds where: " << endl;
    cout << "Rock beats scissors; " << endl;
    cout << "Scissors beats paper; " << endl;
    cout << "Paper beats rock; " << endl;
    cout << "If both you and " << opponentName << "choose the same option, it's a tie." << endl;
    cout << "The goal is to have fun and bond with your digital companion. Can you outsmart " << opponentName << "?" << endl;
    
    playerScore = 0;
    opponentScore = 0;
    string rps[] = {"rock", "paper", "scissors"};
    cout << "Type 'START' to start the game!" << endl;
    cin >> button;

    srand((unsigned int)time(NULL)); 
    if (button == "START"){
    while (true){
        cout << "Enter rock, paper or scissors: ";
        getline(cin, player);
        if(player != "rock" && player != "paper" && player != "scissors"){ 
        break;
        }
        opponent = rps[rand() % 3]; 
        cout << opponentName << " chooses " << opponent <<endl;
        if (player == opponent){ 
            playerScore++;
            opponentScore++;
        } else if (player == "rock"){
             if (opponent == "scissors") playerScore++;
             else opponentScore++;
            } else if (player == "paper"){
                 if (opponent == "rock") playerScore++;
                else opponentScore++;
            } else if (player == "scissors"){
                  if (opponent == "paper") playerScore++;
                 else opponentScore++;
                }
        if( playerScore == 5 || opponentScore == 5) break;
        cout << "Player: " << playerScore << " " << opponentName << ": " << opponentScore << endl;
    }
    }

 cout << "Player: " << playerScore<< " " << opponentName << ": " << opponentScore << endl;
 if (playerScore > opponentScore) cout<< " Player wins!";
 else if (playerScore < opponentScore) cout << opponentName <<  " wins!";
 else cout << "Tie!";

}


