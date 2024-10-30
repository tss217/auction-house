#include "CheckLance.hpp"

void CheckLance::check(Auction auction){
    std::vector<Lance> lances = auction.getLances();
    for(Lance lance : lances){
        if(lance.getValueLance() > highestValue){
            highestValue = lance.getValueLance();
        }
    }

}

float CheckLance::getHighestValue(){
    return highestValue;
}