#include <iostream>
#include <numeric>
using std::cin;
using std::cout;

/*
    requires c++ 17 or above to compile
    std::gcd added in c++ 17
*/

int main()
{
    int num;
    cout << "Enter 5 digit number:\n";
    cin >> num;
    if (num > 99999 || num < 10000)
    {
        cout << "number does not have 5 digits!";
        return 1;
    }

    int fifth_digit = num % 10;
    int fourth_digit = (num / 10) % 10;
    int third_digit = (num / 100) % 10;
    int second_digit = (num / 1000) % 10;
    int first_digit = (num / 10000) % 10;

    if (third_digit % 2 == 0)
    {
        cout << "Does the GCD of 1st and 2nd digits divide the sum of the 4th and 5th? " << std::boolalpha 
             << ((fourth_digit + fifth_digit) % std::gcd(first_digit, second_digit) == 0);
    }
    else 
    {
        cout << "Does the LCM of 1st and 5th digits divide the product of the 2nd and 4th? " << std::boolalpha 
             << ((second_digit * fourth_digit) % std::lcm(first_digit, fifth_digit) == 0);
    }


    return 0;
}