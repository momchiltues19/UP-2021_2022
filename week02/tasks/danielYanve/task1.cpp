#include <iostream>

int main() {

    double arg1, arg2, result = 0;
    char symbol;
    bool isInvalid = false;

    std::cin >> arg1 >> arg2 >> symbol;

    switch (symbol) {

        case '+': {
            result = arg1 + arg2;
            break;
        }

        case '-': {
            result = arg1 - arg2;
            break;
        }

        case '*': {
            result = arg1 * arg2;
            break;
        }

        case '/': {
            if (arg2 != 0) {
                result = arg1 / arg2;
            } else {
                std::cout << "Invalid operation:Dividing by zero!";
                isInvalid = true;
            }
            break;
        }

        default: {
            std::cout << "This operation doesnt exist!" << std::endl;
            isInvalid = true;
        }
    }

    if (!isInvalid) {
        std::cout << arg1 << ' ' << symbol << ' ' << arg2 << " = " << result << std::endl;
    }

    return 0;
}
