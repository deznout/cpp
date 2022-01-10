//
// Created by Hoover Brent on 1/10/22.
//

#include <iostream>
//#include "Contact.hpp"
#include <string>

int main()
{
    std::string command;
    while (1)
    {
        std::cout << "Please, type commands below:\n";
        std::cout << "ADD === SEARCH === EXIT\n";
        std::cin >> command;
        if (command == "ADD")
        {
            return 1;
        }
        if (command == "SEARCH")
        {
            return 2;
        }
        if (command == "EXIT")
            return 0;
    }
}
