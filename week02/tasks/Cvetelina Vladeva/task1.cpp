#include <iostream>
using namespace std;

int main()
{
	double arg1, arg2;
	cin >> arg1 >> arg2;
	cout << arg1 << '+' << arg2 << '=' << arg1 + arg2 << endl;
	cout << arg1 << '-' << arg2 << '=' << arg1 - arg2 << endl;
	cout << arg1 << '*' << arg2 << '=' << arg1 * arg2 << endl;
	if (arg2 != 0)
		cout << arg1 << '/' << arg2 << '=' << arg1 / arg2 << endl;
	else
		cout << "Invalid!";
}
