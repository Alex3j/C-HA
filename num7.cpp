#include <iostream>
#include <cmath>
#include <sstream>

//можно ставить пробелы где угодно, ставить между коэффициентами и иксами знак "*" или не ставить

int main() {
    double x1, x2, d, a, b, c;
    std::string exp, s;
    std::cout << "Enter the expression(the power in \"^2\" format):";
    getline(std::cin,exp); //чтобы строка не вводилась только до первого пробела
    for(int i = 0; i < exp.length(); i++) { //избавляемся от пробелов, если они есть
        if (exp[i] == ' ') {
            exp.erase(i, 1);
            i--;
        }
    }
    for (int i=0; i<=exp.length(); i++){
        if ((exp[i-1]=='^' && isdigit(exp[i])) || (exp[i]=='0' && exp[i-1]=='=')) //не учитываем степень и "=0" для строки с коэфами
            continue;
        if (isdigit(exp[i])) //если цифра, то добавляем в строку
            s += exp[i];
        if (exp[i]=='x' && (isdigit(exp[i-1])==false && exp[i-1] != '*')) //если не записали коэф. "1" перед x или стоит "*"
            s += '1';
        if (isdigit(exp[i])==false) //если нет - ставим пробел
            s += " ";
    }
    std::istringstream(s) >> a >> b >> c; //поток ввода из строки(присваиваем переменным числа из строки с разделителем по пробелу)
    for (int i=0; i<=exp.length(); i++){ //определяем, были ли коэфы отрицательными
        if (exp[0]=='-') a=-a;
        if (exp[i]=='^' && exp[i+2]=='-') b=-b;
        if (exp[i]=='x' && exp[i+1]=='-') c=-c;
    }
    d = b*b - 4*a*c;
    x1 = (-b+sqrt(d))/(2*a);
    x2 = (-b-sqrt(d))/(2*a);
    d >= 0 ? std::cout << "X1:" << x1 << "\n" << "X2:" << x2 : std::cout << "No roots found";
    return 0;
}

/*
    Enter the expression(the power in "^2" format):-x^2 + 5*x + 8 = 0
    X1:-1.27492
    X2:6.27492
*/