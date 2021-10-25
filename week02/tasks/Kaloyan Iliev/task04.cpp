#include <iostream>
using std::cin;
using std::cout;

int main() 
{
    double first_circle_x, first_circle_y, first_circle_r;
    double second_circle_x, second_circle_y, second_circle_r;
    double point_x, point_y;

    cout << "Enter first circle x and y coordinates and radius:\n";
    cin >> first_circle_x >> first_circle_y >> first_circle_r;
    cout << "Enter second circle x and y coordinates and radius:\n";
    cin >> second_circle_x >> second_circle_y >> second_circle_r;
    cout << "Enter point x and y coordinates:\n";
    cin >> point_x >> point_y;

    if ( 
         (point_x - first_circle_x)*(point_x - first_circle_x)  +  (point_y - first_circle_y)*(point_y - first_circle_y)  ==  first_circle_r * first_circle_r       // if point in first_circle 
    &&                                                                                                        
         (point_x - second_circle_x)*(point_x - second_circle_x)  +  (point_y - second_circle_y)*(point_y - second_circle_y)  ==  second_circle_r * second_circle_r // if point in second_circle
       )
    {
        cout << "Point (" << point_x << "," << point_y << ") lies on the intersection of circle (" << first_circle_x << "," << first_circle_y 
             << ") and circle (" << second_circle_x << "," << second_circle_y << ").";
    }
    else 
    {
        cout << "Point (" << point_x << "," << point_y << ") does not lie on the intersection of circle (" << first_circle_x << "," << first_circle_y 
             << ") and circle (" << second_circle_x << "," << second_circle_y << ").";
    }

    /*
          alternaive: cout/return boolean value 
    */

    return 0;
}