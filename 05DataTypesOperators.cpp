#include <iostream>
#include <cmath> 

using namespace std;

int main()
{
    double x1, x2, y1, y2;
    cout << "Enter the x-coordinate of the first point: ";
    cin >> x1;
    cout << "Enter the y-coordinate of the first point: ";
    cin >> y1;
    cout << "Enter the x-coordinate of the 2nd point: ";
    cin >> x2;
    cout << "Enter the y-coordinate of the 2nd point: ";
    cin >> y2;
    double distance_x = x2 - x1;
    double distance_y = y2 - y1;
    double distance = sqrt(pow(distance_x, 2) + pow(distance_y, 2));
    cout << "The distance between the points is: " << distance << endl;
    return 0;
}
