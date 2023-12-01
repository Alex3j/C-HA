#include <iostream>

int main() {
    int sec,min,hour;
    std::cout << "Enter the amount of secs:";
    std::cin >> sec;
    if (sec > 86400 || sec < 0) {
        while (sec > 86400 || sec < 0) {
            std::cout << "There are 86400 seconds in a day, enter the right amount:";
            std::cin >> sec;
            std::cout << "\n"; //без этого многократный вывод сообщения о неверном вводе начинает переносить строку сам (всегда в одном и том же месте для конкретной длины строки) из-за каких-то ограничений :(
        }
    }
    min = sec/60;
    hour = min/60;
    std::cout << "Seconds:" << sec << "\n" << "Minutes:" << min << "\n" << "Hours:" << hour;
    return 0;
}
