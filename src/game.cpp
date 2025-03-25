#include "game.hpp"

void game::add_character(std::string n,int a,int b)
{
    Character m(n,a,b);
    player.push_back(m);
}

void game::print()
{
    for(const auto& item : player)
    {
        std::cout << item.get_name() << std::endl << "health: " << item.get_health() << std::endl << "power: " << item.get_power() << std::endl;
        std::cout << "skills:\n";
        for (const auto& items : item.get_skill())
        {
            std::cout << "  " << items.name << " (Level " << items.level << ")\n";
        }
        std::cout << "\n";
    } 
}

void game::set_skills(std::string charName,std::string skillName, int skillLevel) {
    for (auto& character : player) {
        if (character.get_name() == charName) {
            character.set_skill(skillName, skillLevel);
            return;
        }
    }
    throw std::runtime_error("Character not found.");
}