/*
    Create a C++ program that asks the user for their favourite number between 1 and 100 then
    read this number from the console

    Supose the user enters 24.

    Then display the following to the console:

    Amazing!! That's my favourite number too!
    No really!! 24 is my favourite number!
*/
#include <iostream>

int main(){
    int favourite_number;

    std::cout << "What is your favourite number: ";
    std::cin >> favourite_number;

    std::cout << "Amazing!! That's my favourite number too!" << std::endl;
    std::cout << "No really!! " << favourite_number << " is my favourtie number!" << std::endl;

    return 0;
}