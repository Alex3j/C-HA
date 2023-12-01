#include <iostream>

int main() {
    int rad;
    std::cout << "Enter the radius:";
    std::cin >> rad;
    std::cout << "Lenght: " << 2 * 3.14 * rad << "\n";
    std::cout << "Area: " << 3.14 * rad*rad;
    return 0;
}
