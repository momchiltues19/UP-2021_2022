#include <iostream>
#include <cmath>

int main() {
    double coef1, coef2, coef3, x1, x2;
    bool isComplex = false;

    std::cin >> coef1 >> coef2 >> coef3;

    double D = (coef2 * coef2) - 4 * (coef1 * coef3);

    if (D > 0) {
        x1 = (-coef2 - sqrt(D)) / (2 * coef1);
        x2 = (-coef2 + sqrt(D)) / (2 * coef1);
    } else if (D == 0) {
        x1 = x2 = (-coef2) / (2 * coef1);
    } else {
        std::cout << (-coef2) / (2 * coef1)
                  << " (+/-) " << sqrt(-D) / 2 * coef1 << " * i"
                  << std::endl;
        isComplex = true;
    }

    if (!isComplex) {
        std::cout << "x1:" << x1 << " x2:" << x2 << std::endl;
    }

}
