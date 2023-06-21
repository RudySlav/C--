#include <iostream>

// cout << (Insertion Operator)
// cin >> (Extraction Operator)

int main(){

    std::string name;
    int age;
    
    std::cout << "Whats your full name?: ";
    std::getline(std::cin >> std::ws, name); // Be careful of Whitespaces before getline

    std::cout << "Whats your age?: ";
    std::cin >> age;

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old";

    return 0;
}