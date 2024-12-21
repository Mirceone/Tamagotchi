#include "../include/Game2.hpp"
#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>

using namespace std;
void Game2::playGame(const std::string& opponentName){
    cout << "In diesem Spiel wird sich " << opponentName << " auf der linken oder rechten Seite des Bildschirms verstecken." << endl;
    cout << "Triff deine Wahl: schreibe 'L', wenn du denkst, dass sie auf der linken Seite sind, oder 'R' für die rechte Seite." << endl;
    cout << "Der Gewinner wird nach fünf Runden entschieden." << endl;

    playerScore = 0;
    opponentScore = 0;

    cout << "Gib 'START' ein, um das Spiel zu starten!" << endl;
    cin >> button;

    if (button != "START") {
        cout << "Spiel nicht gestartet!" << endl;
        return;
    }

    srand(time(0));

    while (true) { 
        cout << "Gib L oder R ein: ";
        cin >> player;

        if (player != "L" && player != "R") {
            cout << "Ungültige Eingabe. Bitte gib 'L' oder 'R' ein." << endl;
            continue;
        }

        opponent = (rand() % 2 == 0) ? "L" : "R";

        cout << opponentName << " ist auf der " 
             << (opponent == "L" ? "linken" : "rechten") << " Seite." << endl;

        if (player == opponent) playerScore++;
        else opponentScore++;

        cout << "Aktueller Punktestand:" << endl;
        cout << "Spieler: " << playerScore << " | " << opponentName << ": " << opponentScore << endl;
        cout << endl;

        if (playerScore == 5 || opponentScore == 5) break;
    }

    cout << endl;
    if (playerScore > opponentScore) cout << "Spieler gewinnt!" << endl;
    else cout << opponentName << " gewinnt!" << endl;

    cout << "Endstand:" << endl;
    cout << "Spieler: " << playerScore << " | " << opponentName << ": " << opponentScore << endl;
}
