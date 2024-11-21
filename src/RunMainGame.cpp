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

    bool is_tamagotchi(Tier *tier)
    {
        if (dynamic_cast<Tamagotchi *>(tier))
        {
            return true;
        }
        else if (dynamic_cast<Gudetama *>(tier))
        {
            return false;
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
                // to be done
                break;
            case 'm':
                if (is_tamagotchi)
                {
                    // to be done
                }
                break;
            case 's':
                // to be done
                break;
            case 'f':
                // to be done
                break;
            case 'l':
                // to be done
                break;
            default:
            }
        }
    }
};