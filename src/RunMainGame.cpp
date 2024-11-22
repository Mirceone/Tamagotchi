#include "Tier.hpp"
#include "Tamagotchi.hpp"
#include "Gudetama.hpp"
#include <iostream>

using namespace std;

class RunMainGame
{
private:
    Tier *tier;

    void select_creature()
    {
        cout << "Select creature: T -> Tamagotchi, G -> Gudetama";
        char select;
        cin >> select;
        while (select != 'T' || select != 'G')
        {
            cout << "Select creature: T -> Tamagotchi, G -> Gudetama";
            cin >> select;
        }
        cout << "Insert tier name";
        string tier_name;
        cin >> tier_name;
        if (select == 'T')
        {
            tier = new Tamagotchi(tier_name);
        }
        else
        {
            tier = new Gudetama(tier_name);
        }
    }

public:
    void run()
    {
        select_creature();
        cout << "Get command: ";
        char command;
        cin >> command;
        while (command != 'b')
        {
            switch (command)
            {
            case 'w':
                tier->warten();
                break;
            case 'm':
                Tamagotchi *tamagotchi = dynamic_cast<Tamagotchi *>(tier);
                if (tamagotchi)
                {
                    tamagotchi->medikamentGeben();
                }
                else
                {
                    cout << "Invalid command for Gudetama" << endl;
                }

                break;
            case 's':
                tier->schlafen();
                break;
            case 'f':
                tier->fuettern();
                break;
            case 'l':
                tier.logbuch();
                break;
            default:
                cout << "Invalid command " << endl;
            }
        }
        cout << "Das spiel hat beendet.";
    }
};