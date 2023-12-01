#include <iostream>

int main() {
    std::string num;
    std::cout << "Enter the number(6 digits):";
    std::cin >> num;
    while (num.size() != 6) {
        std::cout << "Enter the number(6 digits):";
        std::cin >> num;
    }
    //суммируются номера символов, а не сами цифры, но задача решается
    (num[0] + num[1] + num[2] == num[3] + num[4] + num[5]) ? std::cout << "Lucky" : std::cout << "Unlucky";
    return 0;
}
