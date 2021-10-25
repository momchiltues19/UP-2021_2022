#include<iostream>
using namespace std;

double sqrt(double D)
{
    double error = 0.00001; //define the precision of your result
    double approx = D; //could be better
    while ((approx - D/approx) > error) //loop until precision satisfied
    {
        approx = (approx + D/approx) / 2;
    }
    return approx;
}

int main(){
    double firstNum, secondNum, thirdNum, x1, x2;
    cin >> firstNum >> secondNum >> thirdNum;
    double D = secondNum*secondNum - (4*firstNum*thirdNum);
    if(D==0)
        x1 = x2 = -secondNum/(2*firstNum);
    else if(D>0){
        x1 = (-secondNum+sqrt(D))/(2*firstNum);
        x2 = (-secondNum-sqrt(D))/(2*firstNum);
        cout << "x1 = " << x1 << endl << "x2 = " << x2;
    }
    else{
        double im, re;
		x1 = x2 = (-secondNum) / (2 * firstNum);
		im = sqrt(-D) / (2 * firstNum);
		cout << "x1 = " << x1 << "+" << im << "*i" << endl;
		cout << "x2 = " << x2 << "-" << im << "*i" << endl;
    }
  return 0;
  }
