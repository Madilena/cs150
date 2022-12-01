#include "Line.h"
#include <cmath>
#include <iomanip>

//this will only work with C++ 11 and later
Line::Line() :  Line(0, 0, 0, 0) {}

Line::Line(Point p1, Point p2) {
    this->m_x1= p1.getX();
    this->m_y1= p1.getY();
    this->m_x2= p2.getX();
    this->m_y2= p2.getY();
}

Line::Line(unsigned int x1, unsigned int y1, unsigned int x2, unsigned int y2) {
    this->m_x1= x1;
    this->m_y1= y1;
    this->m_x2= x2;
    this->m_y2= y2;
}

unsigned int Line::getX1() const {
    return m_x1;
}

unsigned int Line::getY1() const {
    return m_y1;
}

unsigned int Line::getX2() const {
    return m_x2;
}

unsigned int Line::getY2() const {
    return m_y2;
}

bool Line::setX1(unsigned int m_x1) {
    this->m_x1 = m_x1;
    return true;
}

bool Line::setY1(unsigned int m_y1) {
    this->m_y1= m_y1;
    return true;
}

bool Line::setX2(unsigned int m_x2) {
    this->m_x2 = m_x2;
    return true;
}

bool Line::setY2(unsigned int m_y2) {
    this->m_y2= m_y2;
    return true;
}

// friend declaration does not declare a member function
// this operator<< still needs to be defined, as a non-member
ostream& operator<<(ostream& out, const Line& l)
{
    return out << "Line [(x1=" << l.getX1() << ",y1=" << l.getY1() << "),(x2=" << l.getX2() << ",y2=" << l.getY2() << ")]";
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

float Line::length(){
    int x_diff = m_x1 - m_x2;
    int y_diff = m_y1 - m_y2;
    float x_term = pow(x_diff, 2);
    float y_term = pow(y_diff, 2);
    float sum = x_term + y_term;
    float result = sqrt(sum);
    return result;
}
