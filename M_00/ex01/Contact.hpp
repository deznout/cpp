#ifndef CPP_CONTACT_HPP
#define CPP_CONTACT_HPP

# include <string>
# include <iostream>
# include <iomanip>

class Contact {
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
    public:
        Contact();
        ~Contact();
        bool    get_info();
        void    display_info(int id);
        void    print_all_info();
        bool    isMemberEmpty();
};

#endif
