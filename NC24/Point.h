#ifndef POINT_H 
#define POINT_H

#include <iostream>
using namespace std;

class Point {
    private:
        unsigned int m_x;
        unsigned int m_y;
        
    public:
        Point();
        Point(unsigned int m_x, unsigned int m_y);
        unsigned int getX() const;
        unsigned int getY() const;
        bool setX(unsigned int m_x);
        bool setY(unsigned int m_y);
        unsigned int distanceTo(const Point &other);
        void operator=(const Point& point);
        friend bool operator==(Point m_x, Point m_y);
        friend ostream& operator<<(ostream& out, const Point& p);
};

#endif
