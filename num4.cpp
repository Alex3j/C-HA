#include <iostream>

int main() {
    int num, count=0, digit;
    std::cout << "Enter the number:";
    std::cin >> num;
    while (num > 0){
       digit = num%10;
       count+=digit;
       num /= 10;
    }
    std::cout << "Count:" << count;
    return 0;
}
