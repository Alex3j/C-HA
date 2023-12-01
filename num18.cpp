#include <iostream>

int main() {
    std::string num;
    std::cout << "Enter the number(4 digits):";
    std::cin >> num;
    // проверка на 4 цифры
    while(num.size()!=4){
        std::cout << "Enter the number(4 digits):";
        std::cin >> num;
    }
    (num[0]==num[3] && num[1]==num[2]) ? std::cout << "Palindrome" : std::cout << "Not palindrome";
    return 0;
}