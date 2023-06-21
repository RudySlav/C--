#include <iostream>

int main(){
    // Arithmetic Operators = Return the result of a specific arithmetic operation (+ - * /)

    int students = 20;

    //students = students + 2
    students++; // + 1
    students-=1;
    students--; // -1
    students = students * 2;
    students*=2;
    students = students / 2;
    students/=2;

    int remainder = students % 2; // Provides Remainder


    std::cout << students << std::endl;

    // Parenthesis
    // Multiplication & Division
    // Addition & Subtraction

    int beeps = 6 - 5 + 4 * 3 / 2;


    std::cout << beeps;


    return 0;
}