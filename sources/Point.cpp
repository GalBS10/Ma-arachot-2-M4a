#include "Point.hpp"

using namespace std;

Point::Point(double x_plain, double y_plain ){
    plain_x = x_plain;
    plain_y = y_plain;
}

double Point::distance(Point other){
    return 0.0;
}

void Point::print(Point point){
    cout << "(" << point.getX() << "," << point.getY() << ")" << endl;
}

Point Point::moveTowards(Point origin, Point destination, double distance){
    return Point(0,0);
}

double Point::getX(){
    return plain_x;
}
double Point::getY(){
    return plain_y;
}


