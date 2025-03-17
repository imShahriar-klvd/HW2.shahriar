#include <iostream>
#include "game.hpp"
using namespace std;

int main()
{
        try{
        Character s("shahriar",100,50);
        s.set_skill("swimming",10);
        Character m("mohsen",10,-100);
        m.set_skill("fighting",2);
        game g;
        g.add_character(s);
        g.add_character(m);
        }
        catch(exception &a)
        {
                cerr << a.what() << endl;
        }
        
}