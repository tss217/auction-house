#ifndef User_hpp //iguinora multiples includes
#define User_hpp 
#include <string> 

class User{
    private:
    std::string username;
    public:
    User(std::string username);

    std::string getUsername();
};

#endif /*user_hpp*/