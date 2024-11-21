#ifndef tamagotchi_hpp
#define tamagotchi_hpp

#include "tier.hpp"

class Tamagotchi : public Tier {
public:
    Tamagotchi(const std::string& name);

    void waitAction();
    void feed();
    void play();
    void sleep();
    void medicate();
};

#endif