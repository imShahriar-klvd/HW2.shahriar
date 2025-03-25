#include "character.hpp"
#include <stdexcept>
Character::Character(std::string n,int h, int pow):name(n)
{
    set_health(h);
    set_power(pow);
}

    std::string Character::get_name()const{return name;}
    int Character::get_health()const{return health;};
    int Character::get_power()const{return power;}
    std::vector<skill> Character::get_skill()const{return skills;}

void Character::set_health(const int& a)
{
    if(a>=0)
    health=a;
    else
    throw std::out_of_range("invalid health");
}

void Character::set_power(const int& a)
{
    if(a>=0)
    power=a;
    else
    throw std::out_of_range("invalid power");
}

void Character::set_skill(std::string a,int l)
{
    if(l<0)
    throw std::out_of_range("invalid level");
    for(auto& item : skills)
    {
        if(item.get_name()==a)
        {
            item.level=l;
        }
    }
    skill d;
    d.name=a;
    d.level=l;
    skills.push_back(d);
}