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
    Tier(const std::string& name);
    virtual ~Tier() {}

    // Pure virtual methods for pet actions
    virtual void feed() = 0;
    virtual void play() = 0;
    virtual void sleep() = 0;

    // Getter methods
    std::string getName() const { return name; }
    int getAlter() const { return alter; }
    int getGesundheit() const { return gesundheit; }
    int getLangweiligkeit() const { return langeweile; }
    int getHunger() const { return hunger; }

    // Getter for log
    
};

#endif
