#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "CheckLance.hpp"

TEST_CASE("Test case 1") {
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
    REQUIRE(2000 == auctioneer.getHighestValue());
    
}