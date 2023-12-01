#include <iostream>
#include <cmath>

int main() {
    double rad, x, y;
    std::cout << "Enter the x:";
    std::cin >> x;
    std::cout << "Enter the y:";
    std::cin >> y;
    rad = sqrt(x*x+y*y);
    std::cout << "r: " << rad << std::endl;
    std::cout << "Phi: " << atan(y/x);
    return 0;
}
