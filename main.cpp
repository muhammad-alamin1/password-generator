#include <iostream>
#include "./include/pass_generator.h"

using namespace std;

int main()
{
    Password_generator generator;

    unsigned int length;
    bool use_lower, use_upper, use_number, use_symbol;
    string password;

    cout << "Enter the length of Password: ";
    cin >> length;

    cout << "Include lowercase letter? (1/0): ";
    cin >> use_lower;

    cout << "Include uppercase letter? (1/0): ";
    cin >> use_upper;

    cout << "Include Number? (1/0): ";
    cin >> use_number;

    cout << "Include Symbol? (1/0): ";
    cin >> use_symbol;

    generator.set(length, use_lower, use_upper, use_number, use_symbol);
    password = generator.generate_password();

    cout << "Generator Password is: " <<  password << endl;

    return 0;
}
