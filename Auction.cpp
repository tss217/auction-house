#include"Auction.hpp"

Auction::Auction(std::string description):description(description){}

const std::vector<Lance>& Auction::getLances() const{
    return lances;
}

void Auction::receiveLance(const Lance& lance){
    lances.push_back(lance); // operação eficiente para adicionar elementos ao final de um vetor
}