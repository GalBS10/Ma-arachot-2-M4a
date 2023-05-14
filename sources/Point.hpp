#include <stdlib.h>
#include <stdio.h>

class Point
{
private:
    double plain_x;
    double plain_y;
public:
    Point(double x_plain, double y_plain );
    double distance(Point other);
    void print(Point point);
    Point moveTowards(Point origin, Point destination, double distance);
    double getX();
    double getY();
};


