
#include <iostream>
#include "Point.hpp"
#include <cassert>
using namespace std;
int main(int argc, const char * argv[]) {
    Point p1 = Point(3.2, 9.8);
    Point p2 = Point(5.5, -1.2);
    Point p(10.0, 20.0);
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

    std::cout << "Testing ++point (pre-increment x)..." << std::endl;
    ++p;
    assert(p[0] == 11.0);
    assert(p[1] == 20.0);


    
    std::cout << "Testing point++ (post-increment y)..." << std::endl;
    Point old_state = p++;
    assert(p[0] == 11.0);
    assert(p[1] == 21.0);
    assert(old_state[1] == 20.0);

    std::cout << "Testing --point (pre-decrement x)..." << std::endl;
    --p;
    assert(p[0] == 10.0);
    assert(p[1] == 21.0);

        
    std::cout << "Testing point-- (post-decrement y)..." << std::endl;
    p--;
    assert(p[0] == 10.0);
    assert(p[1] == 20.0);

        
    std::cout << "Testing [] write access..." << std::endl;
    p[0] = 99.5;
    p[1] = -5.5;
    assert(p[0] == 99.5);
    assert(p[1] == -5.5);
    
    return EXIT_SUCCESS;
}
