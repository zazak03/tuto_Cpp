#include <iostream>

int main(){
    std::cout << "enter a number:\n";

    int x{};
    std::cin >> x;

    std::cout << "you entered the number '" << x << "', well done.\n";
    std::cout <<"\nOk.\nNow more dificulte, two numbers separated by a space : ";

    int y{};
    std::cin >> x >> y;

    std::cout << "Annnnd, if I'm right you entereded '" << x << "' then '" << y <<"'.\n:)\n";
}