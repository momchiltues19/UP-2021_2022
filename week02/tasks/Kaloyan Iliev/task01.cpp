#include <iostream>
using std::cin;
using std::cout;

int main() 
{
    double arg1, arg2;
    char operation;
    cout << "Enter vars: ";
    cin >> arg1 >> arg2;
    cout << "Enter operation: ";
    cin >> operation;

    switch (operation) 
    {
        case '+': 
            cout << arg1 << " + " << arg2 << " = " << arg1 + arg2;
            break;
        case '-': 
            cout << arg1 << " - " << arg2 << " = " << arg1 - arg2;
            break;
        case '*': 
            cout << arg1 << " * " << arg2 << " = " << arg1 * arg2;
            break;
        case '/':
            if (arg2 == 0) 
            {
                cout << "Cannot divide by zero!";
                return 1;
            } 
            cout << arg1 << " / " << arg2 << " = " << arg1 / arg2;
            break;
        default: 
            cout << "Invalid operation!";
    }

    return 0;
}