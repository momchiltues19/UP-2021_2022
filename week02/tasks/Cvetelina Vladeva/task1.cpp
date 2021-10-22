#include
using namespace std;

int main()
{
double arg1, arg2;
char symbol;
cin >> arg1 >> arg2;
cin>> symbol;
switch (symbol) {
case'+':
{
cout << arg1 << '+' << arg2 << '=' << arg1 + arg2 << endl;
break;
}
case'-':
{
cout << arg1 << '-' << arg2 << '=' << arg1 - arg2 << endl;
break;
}
case'':
{
cout << arg1 << '' << arg2 << '=' << arg1 * arg2 << endl;
break;
}
case'/':
{
if (arg2 != 0)
cout << arg1 << '/' << arg2 << '=' << arg1 / arg2 << endl;
else
cout << "Invalid!";
break;
}
default: cout << "There is no such symbol!"; break;

	return 0;
}
