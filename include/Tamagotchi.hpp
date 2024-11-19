#ifndef tamagotchi_hpp
#define tamagotchi_hpp

#include "tier.hpp"

class Tamagotchi : public Tier {
public:
    Tamagotchi(const std::string& name);

    void feed() override;
    void play() override;
    void sleep() override;
};

#endif