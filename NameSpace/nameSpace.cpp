#include <iostream>

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

int main(){
    // Namespace = Provides a solution for preventing name conflicts
    // in large projects. Each entity needs a unique name. A namespace
    // allows for identically named entites as long as the namespaces are diffrent.

    using std::cout; // Using this allows for not having to repeat std:: all over
    using std::string;

    int x = 0;
    
    cout << x;
    cout << first::x;
    cout << second::x;
    
    return 0;
}