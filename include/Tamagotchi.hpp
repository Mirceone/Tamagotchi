#ifndef tamagotchi_hpp
#define tamagotchi_hpp

#include "tier.hpp"
#include "Log.hpp"

class Tamagotchi : public Tier {
protected:
    int gesundheit;
    RunMainGame log;
public:
    // Constructor explicitly calls the base constructor
    Tamagotchi(const std::string& name);
    
    // Implementations of pure virtual functions
    void warten() override;
    void fuettern() override;
    void spielen() override;
    void medikamentGeben();
    void logbuch() override;
};

#endif