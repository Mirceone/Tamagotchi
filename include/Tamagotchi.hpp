#ifndef tamagotchi_hpp
#define tamagotchi_hpp

#include "Tier.hpp"
#include "Log.hpp"

class Tamagotchi : public Tier {
protected:
    int gesundheit;
    std::string type;
    Log log;
public:
    // Constructor explicitly calls the base constructor
    Tamagotchi(const std::string& name);
    
    // Implementations of pure virtual functions
    void warten() override;
    void fuettern() override;
    void spielen() override;
    void medikamentGeben();
    void logbuch() override;
    void displayMiniGameMenu() override;

    // Getter method for gesundheit
    int get_gesundheit() const { return gesundheit; }
};

#endif