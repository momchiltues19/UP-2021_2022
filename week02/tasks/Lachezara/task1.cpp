#include <iostream>
using namespace std;

int main()
{
	double arg1, arg2;
	cin >> arg1;
	char action;
	cin >> action;
	cin >> arg2;

	switch (action)
	{
	case '+': cout << arg1 << " + " << arg2 << " = " << arg1 + arg2;
		break;
	case '-': cout << arg1 << " - " << arg2 << " = " << arg1 - arg2;
		break;
	case '*': cout << arg1 << " * " << arg2 << " = " << arg1 * arg2;
		break;
	case '/': 
		if (arg2 == 0)
		{
			cout << "Invalid input.";
		}
		else
		{
	       cout << arg1 << " / " << arg2 << " = " << arg1 / arg2;
		}
		break;
	default: cout << "Invalid input.";
		break;
	}


	return 0;
}
