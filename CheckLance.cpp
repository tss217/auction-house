#include "CheckLance.hpp"

void CheckLance::check(Auction auction){
    std::vector<Lance> lances = auction.getLances();
    Lance lastLance = lances.back();
    highestValue = lastLance.getValueLance();
}

float CheckLance::getHighestValue(){
    return highestValue;
}