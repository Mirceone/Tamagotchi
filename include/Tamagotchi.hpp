#ifndef tamagotchi_hpp
#define tamagotchi_hpp

#include "tier.hpp"

class Tamagotchi : public Tier {
public:
    Tamagotchi(const std::string& name);
        // Implementations of pure virtual functions
    void warten() override;
    void fuettern() override;
    void spielen() override;
    void schlafen() override;
    void medikamentGeben();
};

#endif