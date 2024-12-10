#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;
// { } []

//int main(){ 
class Game2{
    public:
    void Game(string opponentName){
        cout << "In this game " << opponentName << " will hide in the left or the right side of the screen" <<endl;
        cout << "Make your choice: write 'L' if you think that he's in the left side or 'R' for the right side" << endl;
        cout << "The winner will be decided after five rounds" << endl;
        string player;
        string opponent;
        int playerScore = 0;
        int opponentScore = 0;
        string lr[] = {"L", "R", "L", "R", "L"};
        string button;

        cout << "Type 'START' to start the game!" << endl;
        cin >> button;

       srand((unsigned int)time(NULL));

       if (button == "START"){
       while(true){ 
           cout << "Enter L or R: ";
           getline(cin,player);

           if (player != "L" && player != "R") break;

           opponent = lr[rand() % 5];

           if ( opponent == "L") cout << opponentName << " is in the left side " << endl;
           else cout << opponentName << " is in the right side " << endl;

           if (player == opponent) playerScore++;
           else opponentScore++;

           if ( playerScore == 5 || opponentScore == 5) break;

           cout << "Current score" << endl;
           cout << "Player: " << playerScore << " " << opponentName << ": " << opponentScore << endl;
           cout << endl;


        }
        }
    
        cout << endl;
        if (playerScore > opponentScore) cout << "Player wins!"<< endl;
        else cout << opponentName << " wins" << endl;
        cout << "Final score" << endl;
        cout << "Player: " << playerScore << " " << opponentName << ": " << opponentScore << endl;
    }
};