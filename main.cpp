
#include "point.hpp"

#include <cassert>
#include <iostream>

int main()
{
    const point p1{1, 2};
    const point p2 = p1;
    const point p3{3, 4};

    std::cout << "p1 = " << p1 <<"\n";
    std::cout << "p2 = " << p2 <<"\n";
    std::cout << "p3 = " << p3 <<"\n";
    assert(p1 == p2);
    assert(!(p1 == p3));
    assert (p1 != p3);

    point p5 {7,8};
    std::cout << "p5 = " << p5 <<"\n";
    point m = p5 + p3;
    std::cout << "m = p5 + p3 " << m <<"\n";

    p5 += p1;
    std::cout << "p5 += p1 " << p5 <<"\n";
    p5 -= p2;
    std::cout << "p5 -= p2 " << p5 <<"\n";

}