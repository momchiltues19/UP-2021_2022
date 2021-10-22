#include <iostream>
using namespace std;

int main (){
  int arg1, arg2;
  char symb;
  cin>> arg1>>symb>>arg2;
  switch(symb){
    case '/': 
      cout << arg1 / arg2;
      break;
    case '*':
      cout<< arg1 * arg2;
      break;
    case '+':
      cout<< arg1 + arg2;
      break;
    case '-':
      cout<< arg1 - arg2;
      break;
  }
  return 0;
}

  
