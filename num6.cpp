#include <cmath>
#include <iostream>

int main() {
    double rad, phi;
    std::cout << "Enter the radius:";
    std::cin >> rad;
    std::cout << "Enter the phi(in radians):";
    std::cin >> phi;
    std::cout << "X:";
    std::cout << rad*cos(phi) << std::endl;
    std::cout << "Y:";
    std::cout << rad*sin(phi);
    return 0;
}
