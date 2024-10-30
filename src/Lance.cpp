#include "Lance.hpp"

Lance::Lance(User user, float valueLance):user(user), valueLance(valueLance){}

float Lance::getValueLance(){
    return valueLance;
}