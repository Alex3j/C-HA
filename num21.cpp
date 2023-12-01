#include <iostream>

int main() {
    std::cout << "Int size: " << sizeof(int) << " bytes\n";
    std::cout << "Long int size: " << sizeof(long int) << " bytes\n";
    std::cout << "Long long int size: " << sizeof(long long int) << " bytes\n";
    std::cout << "Short size: " << sizeof(short) << " bytes\n";
    std::cout << "Char size: " << sizeof(char) << " bytes\n";
    std::cout << "Float size: " << sizeof(float) << " bytes\n";
    std::cout << "Double size: " << sizeof(double) << " bytes\n";
    std::cout << "Long double size: " << sizeof(long double) << " bytes\n";
    std::cout << "Bool size: " << sizeof(bool) << " bytes\n\n";
    std::cout << "Conclusion: int and long int are the same, long long int has twice the size, short has half the size of int\n"
                 "Char and bool have the smallest sizes\n"
                 "Double has twice the size of float due to doubled amount of digits after a comma\n"
                 "Long double size is the largest";
    return 0;
}
