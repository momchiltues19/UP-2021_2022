#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter a 3-digit number: ";
    cin >> num;
    cout << "The digits of the number are:" << endl;
    int hundreds = num / 100;
    int tens = (num / 10) % 10;
    int units = num % 10;
    int sumOfDigits = hundreds + tens + units;
    int multOfDigits = hundreds * tens * units;
    cout << hundreds << endl;
    cout << tens << endl;
    cout << units << endl;
    cout << "Sum of digits: " << sumOfDigits << endl;
    cout << "Multiplication of digits: " << multOfDigits << endl; 
}