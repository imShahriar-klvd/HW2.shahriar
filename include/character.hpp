#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "skill.hpp"
#include <vector>


class Character
{
    public:
    Character(std::string ,int ,int ,std::vector<skill> );
    void set_health(const int&);
    void set_power(const int&);
    void set_skill(std::string ,int);




    private:
    std::string name;
    int health;
    int power;
    std::vector<skill> skills;

};




#endif