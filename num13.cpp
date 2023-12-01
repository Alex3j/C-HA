#include <iostream>
#include <cstdlib>
#include <ctime>
#include <random>

int main() {
    //1 способ
    std::random_device dev; //получение сида (рандомная последовательность чисел), чтобы каждый раз было разное число
    std::default_random_engine engine{dev()}; //генератор случайных чисел
    std::uniform_int_distribution d(1, 9); //равномерное распределение от 1 до 9 включительно
    int rand1 = d(engine);
    //2 способ через srand и rand
    std::srand(std::time(nullptr));
    int rand2= 1+std::rand() % (9-1+1), pred;

    std::cout << "Enter your prediction of the product of the numbers:";
    std::cin >> pred;
    (pred == rand1*rand2) ? std::cout << "You are right!\n" : std::cout << "You are not right!\n";
    std::cout << "The numbers was: " << rand1 << " and " << rand2;
    return 0;
}
