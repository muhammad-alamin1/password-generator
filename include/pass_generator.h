#include <iostream>
#include <string>


#ifndef PASS_GENERATOR_H_INCLUDED
#define PASS_GENERATOR_H_INCLUDED

class Password_generator
{
    private:
        unsigned int length;
        bool use_lower_case;
        bool use_upper_case;
        bool use_number;
        bool use_symbol;

    public:
        const std::string lower_case = "abcdefghijklmnopqrstuvwxyz";
        const std::string upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        const std::string number_case = "0123456789";
        const std::string symbol_case = "!@#$%^&*()-_=+[]{}|;:',.<>?";

        void set(unsigned int length, bool use_lower_case, bool use_upper_case, bool use_number, bool use_symbol);
        std::string generate_password();

};


#endif // PASS_GENERATOR_H_INCLUDED
