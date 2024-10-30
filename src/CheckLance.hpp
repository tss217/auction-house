#ifndef checklance_hpp
#define checklance_hpp
#include "Auction.hpp"

class CheckLance{
    private:
        float highestValue;
    public: 
        void check(Auction auction);
        float getHighestValue();
};
#endif /*checklance_hpp*/