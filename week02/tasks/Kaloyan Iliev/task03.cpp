#include <iostream>
#include <cmath>
using std::cin;
using std::cout;

/*
    assumes correct coeffs
*/

int main() 
{
    double a, b, c, X1, X2;
    bool isComplex = false;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;
    cout << "\n";
    double D = (b * b) - 4.0 * (a * c);

    if (D > 0) 
    {
        X1 = (-b - sqrt(D)) / (2.0 * a);
        X2 = (-b + sqrt(D)) / (2.0 * a);
    } 
    else if (D == 0.0) 
    {
        X1 = X2 = (-b) / (2.0 * a);
    } 
    else 
    {
        std::cout << (-b) / (2.0 * a) << " +/- i" << "sqrt(" << -D << ")" << '/' << 2.0 * a;
        isComplex = true;
    }

    if (!isComplex) {
        std::cout << "X1 = " << X1 << " X2 = " << X2 << "\n";
    }

    return 0;
}