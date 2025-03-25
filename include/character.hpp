#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "skill.hpp"
#include <vector>


class Character
{
    public:
    Character(std::string ,int ,int );
    void set_health(const int&);
    void set_power(const int&);
    void set_skill(std::string ,int);
    std::string get_name()const;
    int get_health()const;
    int get_power()const;
    std::vector<skill> get_skill()const;


    private:
    std::string name;
    int health;
    int power;
    std::vector<skill> skills;

};




#endif