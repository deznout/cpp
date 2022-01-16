//#include "PhoneBook.h"
//
//int main()
//{
//    std::string command;
//    PhoneBook   phoneBook;
//    int         id;
//
//    id = 1;
//    while (command != "EXIT")
//    {
//        std::cout << "Please, type the commands below:\n";
//        std::cout << "ADD === SEARCH === EXIT\n";
//        std::cin >> command;
//        if (command == "ADD")
//        {
//            id = phoneBook.adding_contact(id);
//            if (id == 8)
//                id = 1;
//        }
//        else if (command == "SEARCH")
//            phoneBook.search_contact();
//    }
//    std::cout << "PhoneBook closing...\nBye!\n";
//    return (0);
//}

// string::empty
#include <iostream>
#include <string>

int main ()
{
    std::string content;
    std::string line;
    std::cout << "Please introduce a text. Enter an empty line to finish:\n";
    do {
        getline(std::cin,line);
        content += line + '\n';
    } while (!line.empty());
    std::cout << "The text you introduced was:\n" << content;
    return 0;
}