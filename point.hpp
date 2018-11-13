

#ifndef WEEK11_POINT_EXERCISE_POINT_HPP
#define WEEK11_POINT_EXERCISE_POINT_HPP

#include <sstream>
struct point {
    int x = 0;
    int y = 0;

    point operator+(const point& rhs ) const;

    point operator-(const point& rhs ) const ;

    void operator+= ( const point& rhs);

    void operator-= ( const point& rhs);
};

bool operator==(const point& lhs, const point& rhs);

bool operator!=(const point& lhs, const point& rhs);

std::ostream& operator<< (std::ostream& oss, const point& p);


#endif //WEEK11_POINT_EXERCISE_POINT_HPP
