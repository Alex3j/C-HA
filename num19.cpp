#include <iostream>

int main() {
    std::string num;
    int a, b, c, numB;
    std::cout << "Enter the number:";
    std::cin >> num;
    while (num.size() != 3){
        std::cout << "Enter the number:";
        std::cin >> num;
    }
    std::cout << "Enter the number B:";
    std::cin >> numB;
    //строка парсится по цифрам и конвертируется в int
    a = num[0]-'0';
    b = num[1]-'0';
    c = num[2]-'0';
    (a*b*c > numB) ? std::cout << "The product > number B\n" : std::cout << "The product <= number B\n";
    ((a+b+c)%7==0) ? std::cout << "The sum is a multiple of 7" : std::cout << "The sum is not a multiple of 7";
    return 0;
}
