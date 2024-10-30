#include "User.hpp"

User::User(std::string username):username(username){}

std::string User::getUsername(){
    return username;
}