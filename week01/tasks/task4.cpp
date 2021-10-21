#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double Re, Im; // z = Re + iIm
    int power;

    cout << "Enter Re and Im parts of complex number: ";
    cin >> Re >> Im;
    cout << "Enter power: ";
    cin >> power;

    double modulus = sqrt(Re*Re + Im*Im);
    double angle = power*acos(Re/modulus);

    modulus = pow(modulus, power);
    Re = modulus*cos(angle);
    Im = modulus*sin(angle);

    cout << Re << " + " << Im << "i" << endl;

    return 0;
}
