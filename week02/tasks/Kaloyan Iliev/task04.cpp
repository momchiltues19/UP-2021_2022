#include <iostream>
using std::cin;
using std::cout;

int main() 
{
    double first_circle_x = 0, first_circle_y = 0, first_circle_r = 0;
    double second_circle_x = 0, second_circle_y = 0, second_circle_r = 0;
    double point_x = 0, point_y = 0;

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

    return 0;
}
