#include "CheckLance.hpp"
#include <iostream>

int main(){
    
    //arrange
    Auction auction("nissan silva s13");
    Lance bidSecond(User("jose"), 2000);
    Lance bidFirt(User("jaum"), 1000);
   

    auction.receiveLance(bidFirt);
    auction.receiveLance(bidSecond);

    //act
    CheckLance auctioneer;
    auctioneer.check(auction);

    //assert
    float exepectedValue = 2000;

    if(auctioneer.getHighestValue() == exepectedValue){
        std::cout << "Test passed!" << std::endl;
    }else{
        std::cout << "Test failed!" << std::endl;
    }


    std::cout << "The highest value is: " << auctioneer.getHighestValue() << std::endl;

    return 0;
}