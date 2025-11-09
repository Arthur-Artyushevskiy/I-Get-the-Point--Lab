
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

Point Point::operator++(){
    return Point(x++, y);
}

Point Point::operator++(int){
    return Point(x,y++);
}

Point Point::operator--(){
    return Point(x--, y);
}

Point Point::operator--(int){
    return Point(x, y--);
}

double& Point::operator[](int index){
    double invalid{0.0};
    if(index == 0) return x;
    else if(index == 1) return y;
    std::cerr << "Index out of bounds!" << std::endl;
    return invalid;
}

std::istream& operator>>(std::istream& is, Point& p) {
        std::cout << "Enter x and y coordinates: ";
        is >> p.x >> p.y;
        return is;
}
