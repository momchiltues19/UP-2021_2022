#include <iostream>
#include <numeric>

using std::cin;
using std::cout;
using std::endl;

int main()
{
   int number;
   cin >> number;
   if (number < 10000 || number > 99999) {
       cout << "Invalid number" << endl;
       return 1;
   }

   int first, second, third, fourth, fifth;
   first = number/10000;
   second = (number/1000)%10;
   third = (number/100)%10;
   fourth = (number/10)%10;
   fifth = number%10;

    if (third % 2 == 0) {
        if ((third + fourth) % std::gcd(first, second) == 0) {
            cout << "first case - yes" << endl;
        } else {
            cout << "first case - no" << endl;
        }
    } else {
        if ((second*third) % std::lcm(first, fifth) == 0) {
            cout << "second case - yes" << endl;
        } else {
            cout << "second case - no" << endl;
        }
    }

    return 0;
}
