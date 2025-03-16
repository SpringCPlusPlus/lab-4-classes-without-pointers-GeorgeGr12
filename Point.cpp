#include <iostream>
#include <cmath> // For sqrt() and pow()
#include "Point.h"

using namespace std;



Point::Point(double xCoord, double yCoord) : x(xCoord), y(yCoord) {}

double Point::distanceTo(const Point& other) const {
    return sqrt(pow((other.x - x), 2.0) + pow((other.y - y), 2.0));
}
void Point::print() const {
    cout << "(" << x << ", " << y << ")" << endl;
}