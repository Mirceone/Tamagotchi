#ifndef gudetama_hpp
#define gudetama_hpp

#include "tier.hpp"

class Gudetama : public Tier {
public:
    Gudetama(const std::string& name);

    void feed() override;
    void play() override;
    void sleep() override;
};

#endif
