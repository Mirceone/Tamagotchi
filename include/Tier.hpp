#ifndef tier_hpp
#define tier_hpp

#include <string>

class Tier {
protected:
    std::string name;
    int alter;
    int gesundheit;
    int langeweile;
    int hunger;
    

public:
    // Virtual destructor for proper cleanup of derived classes
    virtual ~Tier() = default;

    // Pure virtual functions (must be implemented in derived classes)
    virtual void warten() = 0;
    virtual void fuettern() = 0;
    virtual void spielen() = 0;
    virtual void schlafen() = 0;

    // Getter methods
    std::string get_name() const { return name; }
    int get_alter() const { return alter; }
    int get_gesundheit() const { return gesundheit; }
    int get_langweile() const { return langeweile; }
    int get_hunger() const { return hunger; }

    // Getter for log
    
};

#endif
