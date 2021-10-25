#include<iostream>
using namespace std;

int main(){
    double arg1, arg2, result;
    char userOperation;
    cin >> arg1 >> userOperation >> arg2;
    switch(userOperation){
        case '*':
            result = arg1 * arg2;
            break;
        case '/':
            result = arg1 / arg2;
            break;
        case '-':
            result = arg1 - arg2;
            break;
        case '+':
            result = arg1 + arg2;
            break;
        default:
            cout << "Operation not supported ";
    }
    cout << result;
  return 0;
  }
