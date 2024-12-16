#ifndef gudetama_hpp
#define gudetama_hpp

#include "Tier.hpp"
#include "Log.hpp"


class Gudetama : public Tier {
protected:
    Log log;
public:
    Gudetama(const std::string& name);
    void warten() override;
    void fuettern() override;
    void spielen() override;
    void logbuch() override;
    void playMiniGame() override;
};

#endif
