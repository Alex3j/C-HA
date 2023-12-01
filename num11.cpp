#include <iostream>

int main() {
    double sum;
    std::cout << "Total cost:";
    std::cin >> sum;
    if (sum < 0) {
        while (sum < 0) {
            std::cout << "Error, try again:";
            std::cin >> sum;
        }
    }
    sum > 1000 ? std::cout << "Total with a discount: " << sum-(sum/100)*10 : std::cout << sum;
    return 0;
}
