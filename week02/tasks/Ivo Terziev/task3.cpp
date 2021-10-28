#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;

    if (a == 0) {
        if (b == 0) {
            cout << "No solution" << endl;
        } else {
            cout << "Answer: x = " << (-c)/b << endl;
        }
    } else {
        double x1, x2, D;
        D = b*b - 4*a*c;

        if (D >= 0) {
            x1 = (-b + sqrt(D))/(2*a);
            x2 = (-b - sqrt(D))/(2*a);
            cout << "Answer: x1 = " << x1 << "; x2 = " << x2 << endl;
        } else {
            cout << (-b) / (2*a) << " +/- (i*" << "sqrt(" << -D << "))" << '/' << 2*a;
        }
    }

    return 0;
}
