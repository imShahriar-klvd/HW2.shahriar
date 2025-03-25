#include <iostream>
#include "game.hpp"
using namespace std;

        int main() {
                game myGame;
                int choice;
            
                while (true)
                {
                    cout << "1. add Character\n";
                    cout << "2. print Characters\n";
                    cout << "3. exit\n";
                    cin >> choice;
            
                    if (choice == 1)
                    {
                        std::string name;
                        int health, power;
                        std::cout << "Enter character name: ";
                        std::cin >> name;
                        std::cout << "Enter health: ";
                        std::cin >> health;
                        std::cout << "Enter power: ";
                        std::cin >> power;
            
                        try
                        {
                            myGame.add_character(name, health, power);
                        }
                        catch (const std::exception& e)
                        {
                            std::cerr << "Error: " << e.what() << "\n";
                        }
                    }
                    else if (choice == 2)
                    {
                        myGame.print();
                    }
                    else if (choice == 3)
                    {
                        break;
                    } else {
                        std::cout << "Invalid choice. Please try again.\n";
                    }
                }
            
                return 0;
            
}