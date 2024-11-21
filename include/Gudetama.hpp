#ifndef gudetama_hpp
#define gudetama_hpp

#include "tier.hpp"

class Gudetama : public Tier {
public:
    Gudetama(const std::string& name);
        // Implementations of pure virtual functions
    void warten() override;
    void fuettern() override;
    void spielen() override;
    void schlafen() override;
};

#endif
