#include <iostream>
using namespace std;

int main() {
  double arg1, arg2;
  char symbol;
  
  cout << "Number 1 is: " << endl;
  cin >> arg1;
  cout << "Number 2 is: " << endl;
  cin >> arg2;
  cout << "The operation you use is: " << endl;
  cin >> symbol;
  
  switch(symbol){
    case '+':{ cout << arg1 + arg2; break; }
    case '-':{ cout << arg1 - arg2; break; }
    case '*':{ cout << arg1 * arg2; break; }
    case '/':{ if (arg2 == 0) cout<< "Error!";
              else cout << arg1 / arg2; break;}
    defaut: cout << "The operator is wrong"; break;
  }
  
  return 0;
}
