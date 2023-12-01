#include <iostream>

int main() {
    int num,ldigit;
    std::cout << "Enter the number(from 1 to 99):";
    std::cin >> num;
    ldigit = num%10;
    switch(ldigit){
        case 1:
            std::cout << num << " kopeyka";
            break;
        case 2:
        case 3:
        case 4:
            std::cout << num << " kopeyki";
            break;
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 0:
            std::cout << num << " kopeek";
            break;
    }
    return 0;
}
