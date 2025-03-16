#ifndef GAME_HPP
#define GAME_HPP

    #include "character.hpp"

    class game
    {
        public:
        void add_character(Character);


        private:
        std::vector<Character> player;



    };


#endif