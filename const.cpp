#include <iostream>

int main(){
    // The const keyword specifies that a varibale's value is constant
    // Tells the complier to prevent anything from modifying it
    // (Read-Only)

    const double PI = 3.14159;
    const int LIGHT_SPEED = 299792458;
    const int WIDTH = 1920;
    const int HEIGHT = 1080;
    
    double radius = 15;
    double circumference = 2 * PI * radius;

    std::cout << circumference << "cm";
    
    return 0;
}