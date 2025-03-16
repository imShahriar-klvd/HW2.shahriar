#ifndef SKILL_HPP
#define SKILL_HPP

#include <iostream>

struct skill
{
    std::string name;
    int level;
    std::string get_name()
    {
        return name;
    }
};


#endif