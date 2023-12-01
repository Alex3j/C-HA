#include <iostream>

int main() {
    double a, b, c, d;
    std::cout << "Enter the sides of the first rectangle:";
    std::cin >> a >> b;
    std::cout << "Enter the sides of the second rectangle:";
    std::cin >> c >> d;
    //проверка сторон попарно
    ((a<c && b<d) || (a<d && b<c)) ? std::cout << "It's possible" : std::cout << "It's impossible";
    return 0;
}
