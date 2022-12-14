#include "Point.h"
#include <cmath>
#include <iomanip>

//this will only work with C++ 11 and later
Point::Point() :  Point(0, 0) {}

Point::Point(unsigned int m_x, unsigned int m_y) {
    this->m_x= m_x;
    this->m_y= m_y;
}

unsigned int Point::getX() const {
    return m_x;
}

unsigned int Point::getY() const {
    return m_y;
}

bool Point::setX(unsigned int m_x) {
    this->m_x = m_x;
    return true;
}

bool Point::setY(unsigned int m_y) {
    this->m_y= m_y;
    return true;
}

// friend declaration does not declare a member function
// this operator<< still needs to be defined, as a non-member
ostream& operator<<(ostream& out, const Point& p)
{
    return out << "Point [x=" << p.m_x << ",y=" << p.m_y << "]";
}

void Point::operator=(const Point &p) {
     setX(p.getX());
     setY(p.getY());
 }

bool operator==(Point a, Point b) {
     return ((a.getX() == b.getX()) &&
         (a.getY() == b.getY()));
}

float Point::distanceTo(const Point &other){
    int x_diff = other.getX() - m_x;
    int y_diff = other.getY() - m_y;
    float x_term = pow(x_diff, 2);
    float y_term = pow(y_diff, 2);
    float sum = x_term + y_term;
    float result = sqrt(sum);
    return result;
}
