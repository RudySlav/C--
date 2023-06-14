#include <iostream>

int main(){
    int x; //Declertaion
    x  = 5; //Assignment
    int y = 6;
    int sum = x + y;

    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << sum << '\n';

    //Integer (Whole Number)
    int age = 23;
    int year = 2023;
    int days = 7.5;

    //Double (Number Including Decimal)
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;
    std::cout << price << '\n';

    //Single Character
    char grade = 'A';
    char initial = 'B';
    std::cout << initial << '\n';
    char currency = '$';

    //Boolean (True or False)
    bool student = true;
    bool power = true;
    bool forSale = true;

    //String (Object That Represents A Sequence Of Text)
    std::string name = "Krzysztof";
    std::string day = "Friday";
    std::string food = "Pizza";
    std::string address = "123 Fake St.";

    std::cout << name << '\n';
    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old" << '\n';
    return 0;
}