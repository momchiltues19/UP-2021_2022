#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double sideA, sideB, sideC;
    cout << "Enter 3 numbers." << endl;
    cin >> sideA >> sideB >> sideC;
    bool canBeTriangle = sideA + sideB > sideC && sideB + sideC > sideA && sideC + sideA > sideB;
    cout << "Can be triangle: " << boolalpha << canBeTriangle << endl;
    double p = (sideA + sideB + sideC) / 2;
    double area = sqrt(p * (p - sideA) * (p - sideB) * (p - sideC));
    cout << "Area of triangle: " << area << endl;
    double heightA = (2 * area) / sideA;
    double heightB = (2 * area) / sideB;
    double heightC = (2 * area) / sideC;
    cout << "Height A: " << heightA << endl;
    cout << "Height B: " << heightB << endl;
    cout << "Height C: " << heightC << endl;
    return 0;
}