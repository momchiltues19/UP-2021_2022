#include <iostream>

int main() 
{
    int arg1, arg2; 
    char operation;
    std::cout << "Enter the two arguments and the operation:";
    std::cin >> arg1 >> arg2 >> operation;
    switch (operation) {
        case '+' : 
        std::cout << arg1 << operation << arg2 << '=' << arg1+arg2 << std::endl;
        break;
        case '-' : 
        std::cout << arg1 << operation << arg2 << '=' << arg1-arg2 << std::endl;
        break;
        case '*' : 
        std::cout << arg1 << operation << arg2 << '=' << arg1*arg2 << std::endl;
        break;
        case '/' : 
        std::cout << arg1 << operation << arg2 << '=' << arg1/arg2 << std::endl;
        break;
        default :
        std::cout << "Invalid operation";
    }
    
    return 0;
}
