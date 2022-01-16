#ifndef CPP_PHONEBOOK_H
#define CPP_PHONEBOOK_H

# include "Contact.hpp"

class PhoneBook {
    private:
        Contact contacts[8];
    public:
        PhoneBook();
        ~PhoneBook();
        int adding_contact(int id);
        //void print_contacts(int id);
        void search_contact();
        //void full_info_out(int id);
};

#endif //CPP_PHONEBOOK_H
