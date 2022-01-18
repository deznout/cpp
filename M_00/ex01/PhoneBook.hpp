#ifndef CPP_PHONEBOOK_HPP
#define CPP_PHONEBOOK_HPP

# include "Contact.hpp"
# include <cstdlib>

class PhoneBook {
    private:
        Contact contacts[8];
    public:
        PhoneBook();
        ~PhoneBook();
        int adding_contact(int id);
        void search_contact();
};

#endif //CPP_PHONEBOOK_HPP
