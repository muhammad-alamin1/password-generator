#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "../include/pass_generator.h"

using namespace std;

// set data
void Password_generator::set(unsigned int length, bool use_lower_case, bool use_upper_case, bool use_number, bool use_symbol)
{
    this->length = length;
    this->use_lower_case = use_lower_case;
    this->use_upper_case = use_upper_case;
    this->use_number = use_number;
    this->use_symbol = use_symbol;
}

// return password
string Password_generator::generate_password()
{
    unsigned int i, random_index;
    string character_set = "";
    string password = "";

    if(use_lower_case)
        character_set += lower_case;
    if(use_upper_case)
        character_set += upper_case;
    if(use_number)
        character_set += number_case;
    if(use_symbol)
        character_set += symbol_case;

    // Seed for random number generation;
    srand(time(0));

    for(i = 0; i < length; i++){
        random_index = rand() % character_set.length();
        password = character_set[random_index];
    }

    return password;
}
