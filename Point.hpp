
#ifndef Point_hpp
#define Point_hpp

#include <stdio.h>
#include <iostream>
#include <cmath>
class Point{
private:
    double x;
    double y;
public:
    Point(double x, double y){
        this->x = x;
        this->y = y;
    }
    
    double getX(){
        return x;
    }
    
    double getY(){
        return y;
    }
    
    double operator-(const Point& pt);
    
    bool operator==(const Point& pt);
    
    bool operator!=(const Point& pt);
    
    Point operator/(const Point& pt);
    
    friend std::ostream& operator<<(std::ostream& os, const Point& pt);
};

#endif /* Point_hpp */
