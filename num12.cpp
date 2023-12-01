#include <iostream>

int main() {
    double height, weight, ideal;
    std::cout << "Enter your weight and height" << std::endl;
    std::cout << "Weight:";
    std::cin >> weight;
    std::cout << "Height:";
    std::cin >> height;
    ideal = height-100;
    std::cout << "Your ideal weight:" << ideal << std::endl;
    if (ideal > weight)
        std::cout << "You should to gain weight";
    else if (ideal < weight)
        std::cout << "You should to lose weight";
    else if (ideal == weight)
        std::cout << "You have an ideal weight";
    return 0;
}
