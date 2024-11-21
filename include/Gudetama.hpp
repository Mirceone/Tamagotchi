#ifndef gudetama_hpp
#define gudetama_hpp

#include "tier.hpp"

class Gudetama : public Tier {
public:
    Gudetama(const std::string& name);

    void waitAction();
    void feed();
    void play();
    void sleep();
};

#endif
