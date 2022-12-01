#ifndef LINE_H 
#define LINE_H

#include <iostream>
using namespace std;

class Line {
    private:
        unsigned int m_x1;
        unsigned int m_y1;
        unsigned int m_x2;
        unsigned int m_y2;
        
    public:
        Line();
        Line(Point p1, Point p2);
        Line(m_x1, m_y1, m_x2, m_y2);
        unsigned int getX1() const;
        unsigned int getY1() const;
        unsigned int getX2() const;
        unsigned int getY2() const;
        bool setX1(unsigned int m_x1);
        bool setY1(unsigned int m_y1);
        bool setX2(unsigned int m_x2);
        bool setY2(unsigned int m_y2);
        float length();
        void operator=(const Line& line);
        friend bool operator==(Line l1, Line l2);
        friend ostream& operator<<(ostream& out, const Line& l);
};

#endif
