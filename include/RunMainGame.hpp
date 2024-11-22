#include "Tier.hpp"

#ifndef RunMainGame_hpp
#define RunMainGame_hpp

class RunMainGame {
private:
    Tier* tier;
    Log log;

    void select_creature();
    bool is_tamagotchi();

public:
    void run();
};

#endif