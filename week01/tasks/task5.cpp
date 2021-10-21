#include <iostream>
#include <cmath>

const double PI = 3.141592653589793; //или можете да ползвате acos(0), което дава стойност pi/2

using namespace std;

int main()
{
	double cone_radius, cone_slant, ball_radius;
	int ball_amount; 

	cout << "Enter cone radius and slant: ";
	cin >> cone_radius >> cone_slant; 
	cout << "Enter ball radius and amount of balls: ";
	cin >> ball_radius >> ball_amount;

	double cone_height = sqrt(cone_slant*cone_slant - cone_radius*cone_radius);
	double cone_volume = (PI/3)*cone_height*cone_radius*cone_radius;
	double ball_volume = (2*PI/3)*pow(ball_radius, 3);

	cout << "Ice cream volume is " << cone_volume + ball_amount*ball_volume << endl;

    return 0;
}
