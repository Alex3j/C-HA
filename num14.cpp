#include <iostream>

int main() {
    int day, minutes;
    double price;
    std::cout << "Enter the price/min:";
    std::cin >> price;
    std::cout << "Enter the day(1-7):";
    std::cin >> day;
    std::cout << "How many minutes will the negotiations last?:";
    std::cin >> minutes;
    price*=minutes;
    if (day == 7 || day == 6)
        price -= (price/100*20);
    std::cout << "Total: " << price;
    return 0;
}
