#ifndef Lance_hpp
#define Lance_hpp
#include "User.hpp"

class Lance{
    private:
    User user;
    float valueLance;

    public:
    Lance(User user, float valueLance);

    float getValueLance();

};

#endif /*lance_hpp*/