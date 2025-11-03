
#include "Point.hpp"

double Point::operator-(const Point& pt){
    return sqrt(pow(x - pt.x, 2) + pow(y - pt.y, 2));
}

bool Point::operator==(const Point& pt){
    if((x == pt.x) && (y == pt.y)){
        return true;
    }
    return false;
}

bool Point::operator!=(const Point& pt){
    if((x == pt.x) || (y == pt.y)){
        return false;
    }
    return true;
}

Point Point::operator/(const Point& pt){
    return Point((x + pt.x)/2, (y + pt.y)/2);
}

std::ostream& operator<<(std::ostream& os, const Point& pt){
    os << "(" << pt.x << "," << pt.y <<")";
    return os;
}

