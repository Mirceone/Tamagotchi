#include "Tier.hpp"

#ifndef run_main_game_hpp
#define run_main_game_hpp

class RunMainGame
{
private:
    Tier* tier;
    void select_creature();
    bool is_tamagotchi();

public:
    void run();
};

#endif