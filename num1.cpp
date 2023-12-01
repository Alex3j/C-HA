#include <iostream>

int main() {
    float baseA, baseB, h;
    std::cout << "Enter the base A:";
    std::cin >> baseA;
    std::cout <<"Enter the base B:";
    std::cin >> baseB;
    std::cout << "Enter the height:";
    std::cin >> h;
    std::cout << "Area: " << ((baseA+baseB)/2)*h;
    return 0;
}