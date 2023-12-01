#include <iostream>
#include <cmath>

int main() {
    float catA, catB;
    std::cout << "Enter the catheter A:";
    std::cin >> catA;
    std::cout << "Enter the catheter B:";
    std::cin >> catB;
    std::cout << "Area: " << 0.5*catA*catB << std::endl;
    std::cout << "Hypotenuse: " << sqrt(pow(catA,2)+pow(catB,2));
    return 0;
}
