#include <iostream>

int main(){

    // Type Conversion = Conversion of one data type to another
    // Implicit = Automatic
    // Explicit = Precede value with new data  type (int)

    double x = (int) 3.14;

    char a = 100;


    std::cout << x;
    std::cout << a;

    std::cout << (char) 100; // Explicit

    int correct = 8;
    int questions = 10;
    double score = correct/(double)questions * 100;

    std::cout << score << "%";

    return 0;
}