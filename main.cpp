
#include <iostream>
#include "Point.hpp"
#include <cassert>
using namespace std;
int main(int argc, const char * argv[]) {
    Point p1 = Point(3.2, 9.8);
    Point p2 = Point(5.5, -1.2);
    
    Point p_test = Point(4.35, 4.3);
    cout << p1<< endl;
    
    assert((p1 - p2) - 11.238 <=0.001);
    cout << p1 - p2 << endl;
    assert(!(p1 == p2));
    cout << (p1 == p2) << endl;
    assert(p1 != p2);
    cout << (p1 != p2) << endl;
    Point p4 =p1 / p2;
    assert(p_test.getX() - p4.getX() <= 0.0001 && p_test.getY() - p4.getY() <= 0.0001);
    cout << (p1 / p2) << endl; 

    return EXIT_SUCCESS;
}
