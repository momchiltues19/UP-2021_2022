#include <iostream>

using namespace std;

int main()
{
    bool expr1, expr2;

    cin >> expr1 >> expr2;

    bool conjunction = !(!expr1 || !expr2); //&&
    bool implication = !expr1 || expr2; //->
    bool equivalence = !(!(!expr1 || expr2) || !(!expr2 || expr1)); //<-> = -> && <-

    cout << boolalpha;
    cout << "Conjunction - " << conjunction << endl;
    cout << "Implication - " << implication << endl;
    cout << "Equivalence - " << equivalence << endl;

    return 0;
}
