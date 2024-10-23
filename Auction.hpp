#ifndef Auction_hpp
#define Auction_hpp
#include <string>
#include <vector>
#include "Lance.hpp"

class Auction{
    private:
    std::vector<Lance> lances; //vector e um array dinamico
    std::string description;

    public:
    Auction(std::string description);

    const std::vector<Lance>& getLances() const; //metodo para retornar o endereco do vetor de lances
    void receiveLance(const Lance& lance);

};

#endif /*auction_hpp*/