#include <iostream>
using std::cin;
using std::cout;



int main() 
{
    int arg1, arg2;
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
            cout << arg1 << " / " << arg2 << " = " << arg1 / arg2;
            break;
        default: 
            cout << "invalid operation!";
    }

    return 0;
}