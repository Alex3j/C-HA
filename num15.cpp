#include <iostream>

int main() {
    int month;
    std::cout << "Enter the number of month:";
    std::cin >> month;
    if (month==1||month==2||month==12){
        std::cout << "Winter, ";
        switch(month){
            case 1:
                std::cout << "January";
                break;
            case 2:
                std::cout << "February";
                break;
            case 12:
                std::cout << "December";
                break;
        }
    }
    if (month==3||month==4||month==5){
        std::cout << "Spring, ";
        switch(month){
            case 3:
                std::cout << "March";
                break;
            case 4:
                std::cout << "April";
                break;
            case 5:
                std::cout << "May";
                break;
        }
    }
    if (month==6||month==7||month==8){
        std::cout << "Summer, ";
        switch(month){
            case 6:
                std::cout << "June";
                break;
            case 7:
                std::cout << "July";
                break;
            case 8:
                std::cout << "August";
                break;
        }
    }
    if (month==9||month==10||month==11){
        std::cout << "Fall, ";
        switch(month){
            case 9:
                std::cout << "September";
                break;
            case 10:
                std::cout << "October";
                break;
            case 11:
                std::cout << "November";
                break;
        }
    }
    return 0;
}
