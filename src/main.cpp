#include <iostream>
#include "game.hpp"
using namespace std;

        int main() {
                game ga;
                int choice;
            
                while (true)
                {
                    cout << "1. add Character\n";
                    cout << "2. print Characters\n";
                    cout << "3. exit\n";
                    cout << "4. add skill to a character\n";
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
                            ga.add_character(name, health, power);
                        }
                        catch (const std::exception& e)
                        {
                            std::cerr << "Error: " << e.what() << "\n";
                        }
                    }
                    else if (choice == 2)
                    {
                        ga.print();
                    }
                    else if (choice == 3)
                    {
                        break;
                    }
                    else if(choice == 4)
                    {
                    string name, s;
                    int l;
            cout << "Enter character name to add a skill: ";
            cin >> name;
            cout << "Enter skill name: ";
            cin >> s;
            cout << "Enter skill level: ";
            cin >> l;
            try
            {
                ga.set_skills(name,s,l);
            }
            catch (const exception& e)
            {
                cerr << "Error: " << e.what() << "\n";
            }
                    }
                    else
                    {
                        cout << "Invalid command.Try again\n";
                    }
                }
            
                return 0;
            
}