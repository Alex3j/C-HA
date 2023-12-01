#include <iostream>

int main() {
    double a,b,c;
    std::cout << "Enter the sides of triangle:";
    std::cin >> a >> b >> c;
    (a==b || b==c || a==c) ? std::cout << "The triangle is isosceles" : std::cout << "The triangle isn't isosceles";
    return 0;
}
