#include <iostream>

int main() {

    int dd, mm, daysAddition;
    char fill;

    std::cin >> dd >> fill >> mm >> daysAddition;

    dd += daysAddition % 30;
    mm += daysAddition / 30;

    if (dd > 31) {
        dd %= 30;
    }

    if (mm > 12) {
        mm %= 12;
    }

    if (mm == 0) {
        mm++;
    }

    switch (mm) {
        case 12: {
        }
        case 1: {
        }
        case 2: {
            std::cout << "Winter" << std::endl;
            break;
        }
        case 3: {
        }
        case 4: {
        }
        case 5: {
            std::cout << "Spring" << std::endl;
            break;
        }
        case 6: {
        }
        case 7: {
        }
        case 8: {
            std::cout << "Summer" << std::endl;
            break;
        }
        case 9: {
        }
        case 10: {
        }
        case 11: {
            std::cout << "Autumn" << std::endl;
            break;
        }
    }
    std::cout << "Current Date - " << dd << ':' << mm << std::endl;

}
