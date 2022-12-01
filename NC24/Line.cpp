#include "Line.h"
#include <cmath>
#include <iomanip>

//this will only work with C++ 11 and later
Line::Line() :  Line(0, 0, 0, 0) {}

Line::Line(unsigned int m_x, unsigned int m_y) {
    this->m_x= m_x;
    this->m_y= m_y;
}

unsigned int Point::getX1() const {
    return m_x1;
}

unsigned int Point::getY1() const {
    return m_y1;
}

unsigned int Point::getX2() const {
    return m_x2;
}

unsigned int Point::getY2() const {
    return m_y2;
}

bool Point::setX1(unsigned int m_x1) {
    this->m_x1 = m_x1;
    return true;
}

bool Point::setY1(unsigned int m_y1) {
    this->m_y1= m_y1;
    return true;
}

bool Point::setX2(unsigned int m_x2) {
    this->m_x2 = m_x2;
    return true;
}

bool Point::setY2(unsigned int m_y2) {
    this->m_y2= m_y2
    return true;
}

// friend declaration does not declare a member function
// this operator<< still needs to be defined, as a non-member
ostream& operator<<(ostream& out, const Line& l)
{
    return out << "Line [(x1=" << l.m_x1 << ",y1=" << l.m_y1 << "),(x2=" << l.m_x2 << ",y2=" << m_y2 << ")]";
}

void Line::operator=(const Line &l) {
     setX1(l.getX1());
     setY1(l.getY1());
     setX2(l.getX2());
     setY2(l.getY2());
 }

bool operator==(Line a, Line b) {
     return ((a.getX1() == b.getX1()) &&
         (a.getY1() == b.getY1()) && (a.getX2() == b.getX2()) && (a.getY2() == b.getY2()));
}

float length(){
    int x_diff = m_x1 - m_x2;
    int y_diff = m_y1 - m_y2;
    float x_term = pow(x_diff, 2);
    float y_term = pow(y_diff, 2);
    float sum = x_term + y_term;
    float result = sqrt(sum);
    return result;
}
