#include <iostream>
#include <cmath>
using namespace std;

/*
    assumes correct coeffs
*/

int main() 
{
    double coeff_a, coeff_b, coeff_c, x1, x2;
    bool isComplex = false;
    cout << "a = ";
    cin >> coeff_a;
    cout << "b = ";
    cin >> coeff_b;
    cout << "c = ";
    cin >> coeff_c;
    cout << "\n";
    double D = (coeff_b * coeff_b) - 4.0 * (coeff_a * coeff_c);

    if (D > 0) 
    {
        x1 = (-coeff_b - sqrt(D)) / (2.0 * coeff_a);
        x2 = (-coeff_b + sqrt(D)) / (2.0 * coeff_a);
    } 
    else if (D == 0.0) 
    {
        x1 = x2 = (-coeff_b) / (2.0 * coeff_a);
    } 
    else 
    {
        std::cout << (-coeff_b) / (2.0 * coeff_a) << " +/- i" << sqrt(-D) / 2.0 * coeff_a;
        isComplex = true;
    }

    if (!isComplex) {
        std::cout << "x1 = " << x1 << " x2 = " << x2 << "\n";
    }

    return 0;
}
