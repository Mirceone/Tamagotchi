#ifndef tier_hpp
#define tier_hpp

#include "Log.hpp"
#include <string>

class Tier {
protected:
    std::string name;
    int alter;
    int langeweile;
    int hunger;
    

public:
    // Constructor for shared attributes
    Tier(const std::string& name)
        : name(name), alter(1), hunger(1), langeweile(3) {}
    // Virtual destructor for proper cleanup of derived classes
    virtual ~Tier() = default;

    // Pure virtual functions
    virtual void warten() = 0;
    virtual void fuettern() = 0;
    virtual void spielen() = 0;
    virtual void displayMiniGameMenu() = 0;

    // Getters
    std::string get_name() const { return name; }
    int get_alter() const { return alter; }
    int get_langweile() const { return langeweile; }
    int get_hunger() const { return hunger; }
    virtual void logbuch() = 0;
    
};

#endif
