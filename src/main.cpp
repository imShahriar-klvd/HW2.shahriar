#include <iostream>
#include "game.hpp"
using namespace std;

int main()
{
        Character s("shahriar",100,50);
        s.set_skill("swimming",10);
        Character m("mohsen",80,100);
        m.set_skill("fighting",2);
        game g;
        g.add_character(s);
        g.add_character(m);
}