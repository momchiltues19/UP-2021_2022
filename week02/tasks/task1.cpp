
#include <iostream>
using namespace std;

int main()
{
    double arg1;
    double arg2;
    char sign;
    cin >> arg1 >> sign >> arg2;
    double result;
    
    if (sign == '+')
    {
        result = arg1 + arg2;
        cout <<"The result is: " << result;
    }
    else if (sign == '-')
    {
        result = arg1 - arg2;
        cout << "The result is: " << result;
    }
    else if (sign == '*')
    {
        result = arg1 * arg2;
        cout << "The result is: " << result;
    }
    else if (sign == '/')
    {
        result = arg1 / arg2;
        cout << "The result is: " << result;
    }
}

