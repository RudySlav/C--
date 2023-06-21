#include <iostream>
#include <cmath>

int main(){

    double x = 3;
    double y = 4;
    double w = 3.99;
    double z;

    //z = std::max(x,y); // Max of numbers
    //z = std::min(x,y); // Minimum of numbers

    //z = pow(2,4); // Power Function
    //z = sqrt(9); // Square Root
    //z = abs(-3);
    //z = round(x);
    //z = ceil(x);
    z = floor(w);

    std::cout << z;

    return 0;
}