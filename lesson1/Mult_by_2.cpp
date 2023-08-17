#include <iostream>

int main(){
    int x; // not apreciated by learncpp.com
    
    std::cout << "Give me a nuber, please: ";
    std::cin >> x;

    std::cout << x << " * 2 = " << x*2 << ".\n";

    return 0; //all is good.

}