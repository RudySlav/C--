#include <iostream>
#include <vector>

// typedef std::vector<std::pair<std::string, int>> pairlist_t;
//typedef std::string text_t;
//typedef int number_t;
using text_t = std::string;
using number_t = int;


int main(){

    // typedef = Reserved keyword used to create an additional name
    //           (alias) for another data type. New identifier for
    //           an exisitng type helps with readability and reduces typos.

    //pairlist_t pairlist_t; // By using type def it keeps code short

    text_t firstName = "Kris";
    number_t age = 21;
    
    std::cout << firstName << '\n';
    std::cout << age << '\n';

    return 0;
}