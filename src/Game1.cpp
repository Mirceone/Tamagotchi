#include "../include/Game1.hpp"
#include <iostream> 
#include <string>
#include <cstdlib> 
#include <time.h> 

using namespace std;
void Game1::playGame(const string& opponentName) {
    cout << "In diesem lustigen Twist des klassischen Spiels spielst du Schere, Stein, Papier gegen " << opponentName << ".";
    cout << "So funktioniert es:" << endl;
    cout << "Triff deine Wahl: schreibe Schere, Stein oder Papier; " << endl;
    cout << opponentName << " wird seine Wahl treffen." << endl;
    cout << "Der Gewinner wird nach fuenf Runden entschieden, wobei: " << endl;
    cout << "Stein schlaegt Schere; " << endl;
    cout << "Schere schlaegt Papier; " << endl;
    cout << "Papier schlaegt Stein; " << endl;
    cout << "Wenn sowohl du als auch " << opponentName << " die gleiche Option waehlen, ist es ein Unentschieden." << endl;
    cout << "Das Ziel ist es, Spaß zu haben und mit deinem digitalen Begleiter zu spielen. Kannst du " << opponentName << " ueberlisten?" << endl;
    
    playerScore = 0;
    opponentScore = 0;
    string rps[] = {"Schere", "Stein", "Papier"};
    cout << "Gib 'START' ein, um das Spiel zu starten!" << endl;
    cin >> button;

    srand(time(0)); 
    if (button == "START"){
    while (true){
        cout << "Gib Schere, Stein oder Papier ein: ";
        cin >> player;
        if(player != "Schere" && player != "Stein" && player != "Papier"){ 
        break;
        }
        opponent = rps[rand() % 3]; 
        cout << opponentName << " waehlt " << opponent << endl;
        if (player == opponent) { 
            cout << "Diese Runde ist ein Unentschieden!" << endl;
        } else if (player == "Stein") {
            if (opponent == "Schere") playerScore++;
            else opponentScore++;
        } else if (player == "Papier") {
            if (opponent == "Stein") playerScore++;
            else opponentScore++;
        } else if (player == "Schere") {
            if (opponent == "Papier") playerScore++;
            else opponentScore++;
        }
        if (playerScore == 5 || opponentScore == 5) break;
        cout << "Spieler: " << playerScore << " " << opponentName << ": " << opponentScore << endl;
    }
    }

    cout << "Spieler: " << playerScore << " " << opponentName << ": " << opponentScore << endl;
    if (playerScore > opponentScore) cout << " Spieler gewinnt!";
    else if (playerScore < opponentScore) cout << opponentName << " gewinnt!";
    else cout << "Unentschieden!";
}
