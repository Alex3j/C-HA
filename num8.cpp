#include <iostream>
#include "cmath"

int main() {
    double a,b,c,ma,mb,mc;
    std::cout << "Enter the sides of triangle:";
    std::cin >> a >> b >> c;
    //находим медианы исходного треугольника
    ma = 0.5*sqrt(2*c*c+2*b*b-a*a);
    mb = 0.5*sqrt(2*c*c+2*a*a-b*b);
    mc = 0.5*sqrt(2*a*a+2*b*b-c*c);
    //записываем их сторонами нового треугольнака
    a = ma;
    b = mb;
    c = mc;
    //находим медианы нового треугольника
    ma = 0.5*sqrt(2*c*c+2*b*b-a*a);
    mb = 0.5*sqrt(2*c*c+2*a*a-b*b);
    mc = 0.5*sqrt(2*a*a+2*b*b-c*c);
    std::cout << "Answer: " << ma << " " << mb << " " << mc;
    return 0;
}
