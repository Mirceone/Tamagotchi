#include "../include/RunMainGame.hpp"
#include "../include/Tamagotchi.hpp"
#include "../include/Gudetama.hpp"
#include "../include/Tier.hpp"
#include "../include/Utils.hpp"
#include <iostream>

using namespace std;

void RunMainGame::select_creature(){
    cout << "Select creature: T -> Tamagotchi, G -> Gudetama" << endl;
    char select ;
    cin >> select;
    while (select != 'T' && select != 'G') {
        cout << "Select creature: T -> Tamagotchi, G -> Gudetama" << endl;
        cin >> select;
    }
    cout << "Insert tier name: ";
    string tier_name;
    cin >> tier_name;
    if (select == 'T') {
        tier = new Tamagotchi(tier_name);
    } else {
        tier = new Gudetama(tier_name);
    }
    cout << "Tier created: " << tier->get_name() << endl;
}

void RunMainGame::run() {
    select_creature();

    char command;
    do {
        // Clear the terminal
        clear_screen();

        // Display animal's current attributes
        cout << "\n=============================" << endl;
        cout << "Tier: " << tier->get_name() << endl;
        cout << "Alter: " << tier->get_alter() << endl;
        cout << "Hunger: " << tier->get_hunger() << endl;
        cout << "Langeweile: " << tier->get_langweile() << endl;
        // Check if the animal is a Tamagotchi and display gesundheit
        Tamagotchi* tamagotchi = dynamic_cast<Tamagotchi*>(tier);
        if (tamagotchi) {
            cout << "Gesundheit: " << tamagotchi->get_gesundheit() << endl;
        }
        cout << "=============================" << endl;

        // Display available commands
        cout << "Befehle:" << endl;
        cout << "  w -> Warten" << endl;
        cout << "  f -> Füttern" << endl;
        cout << "  s -> Spielen" << endl;
        cout << "  m -> Medikament geben (nur Tamagotchi)" << endl;
        cout << "  l -> Logbuch anzeigen" << endl;
        cout << "  b -> Beenden" << endl;

        // Get the next command
        cout << "Befehl eingeben: ";
        cin >> command;

        // Process the command
        switch (command) {
            case 'w':
                tier->warten();
                break;
            case 'm': {
                Tamagotchi* tamagotchi = dynamic_cast<Tamagotchi*>(tier);
                if (tamagotchi) {
                    tamagotchi->medikamentGeben();
                } else {
                    cout << "Ungültiger Befehl für Gudetama" << endl;
                }
                break;
            }
            case 's':
                tier->spielen();
                break;
            case 'f':
                tier->fuettern();
                break;
            case 'l':
                cout << "\nLogbuch: " << endl;
                tier->logbuch();
                cout << "Drücke Enter, um fortzufahren..." << endl;
                cin.ignore();
                cin.get(); // Pause only for viewing the logbook
                break;
            default:
                if (command != 'b') {
                    cout << "Ungültiger Befehl. Bitte versuche es erneut." << endl;
                }
        }

    } while (command != 'b');

    // Pause only once when exiting the game
    cout << "\nDas Spiel ist beendet. Vielen Dank fürs Spielen!" << endl;
    cout << "Drücke Enter, um das Spiel zu beenden..." << endl;
    cin.ignore();
    cin.get();
}

