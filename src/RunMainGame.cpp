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
        cout << "  f -> Fuettern" << endl;
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
                pause_and_clear();
                break;
            case 'm': {
                Tamagotchi* tamagotchi = dynamic_cast<Tamagotchi*>(tier);
                if (tamagotchi) {
                    tamagotchi->medikamentGeben();
                } else {
                    cout << "Ungueltiger Befehl für Gudetama" << endl;
                }
                pause_and_clear();
                break;
            }
            case 's':
                tier->displayMiniGameMenu();
                if (!std::cin) {  // Handle invalid input clearing
                    std::cin.clear();  // Clear error flag
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Skip bad input
                } else {
                    tier->spielen();
                }
                pause_and_clear();
                break;
            case 'f':
                tier->fuettern();
                pause_and_clear();
                break;
            case 'l':
                cout << "\nLogbuch: " << endl;
                tier->logbuch();
                pause_and_clear();
                break;
            default:
                if (command != 'b') {
                    cout << "Ungueltiger Befehl. Bitte versuche es erneut." << endl;
                    pause_and_clear();
                }
        }

    } while (command != 'b');

    // Pause only once when exiting the game
    cout << "\nDas Spiel ist beendet. Vielen Dank fuers Spielen!" << endl;
    cout << "Druecke Enter, um das Spiel zu beenden..." << endl;
    cin.ignore();
    cin.get();
}

