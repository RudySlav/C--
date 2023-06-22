#include <iostream>
#include <cmath>

int main(){

    double a;
    double b;
    double c;

    std::cout << "Enter side A in CM: ";
    std::cin >> a;

    std::cout << "Enter side B in CM: ";
    std::cin >> b;

    a = pow(a,2);
    b = pow(b,2);
    c = sqrt(a + b);

    // Alternative = c = sqrt(pow(a,2) + pow(b,2));

    std::cout << "Side C: " << c << "cm";

    return 0;
}