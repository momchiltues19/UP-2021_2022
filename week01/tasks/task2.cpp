#include <iostream>

using namespace std;

int main()
{
    int num;
    
    cout << "Enter a 3-digit number: ";
    cin >> num;
    
    int hundreds = num / 100;
    int tens = (num / 10) % 10;
    int units = num % 10;
    
    cout << "The digits of the number are:" << endl;
    cout << hundreds << endl;
    cout << tens << endl;
    cout << units << endl;
    
    int sumOfDigits = hundreds + tens + units;
    cout << "Sum of digits: " << sumOfDigits << endl;
    
    int multOfDigits = hundreds * tens * units;
    cout << "Multiplication of digits: " << multOfDigits << endl; 
    
    return 0;
}
