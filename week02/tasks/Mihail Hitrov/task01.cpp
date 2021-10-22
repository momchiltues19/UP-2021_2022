#include <iostream>

using namespace std;

int main()
{
    double firstNumber, secondNumber;
    char operation;

    cout << "Enter the value of first number:" << endl;
    cin >> firstNumber;

    cout << "Enter the operation:" << endl;
    do
    {
        cin >> operation;
    } while (0);

    cout << "Enter the value of second number:" << endl;
    cin >> secondNumber;

    string expression = to_string(firstNumber) + " " + operation + " " + to_string(secondNumber) + " = ";

    switch (operation)
    {
    case '+':
        cout << expression << firstNumber + secondNumber;
        break;
    case '-':
        cout << expression << firstNumber - secondNumber;
        break;
    case '*':
        cout << expression << firstNumber * secondNumber;
        break;
    case '/':
        cout << expression << firstNumber / secondNumber;
        break;
    default:
        break;
    }

    return 0;
}
