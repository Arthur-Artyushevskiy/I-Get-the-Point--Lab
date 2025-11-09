
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
    
    Point operator++();

    // Post-increment (point++): Increments Y
    Point operator++(int);

    // Pre-decrement (--point): Decrements X
    Point operator--();

        // Post-decrement (point--): Decrements Y
    Point operator--(int);


    // This allows read AND write access (e.g., point[0] = 5.0;)
    double& operator[](int index);

      
    // Defined as a 'friend' so it can access private x and y directly
    friend std::istream& operator>>(std::istream& is, Point& p);
};

#endif /* Point_hpp */
