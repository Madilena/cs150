#define _USE_MATH_DEFINES
#include <cstdlib>
#include <sstream>
#include <math.h>
#include <iostream>
#include <cmath>
#include <string.h>
using namespace std;

class Circle {       
  public:            
    double radius;  

    Circle(double r)
    {
        radius=r;
    }
    double area();
    double circumference();
    double getRadius();
    string toString();
};

double Circle::area(){
    return M_PI * radius * radius;
}

double Circle::circumference(){
    return 2 * M_PI * radius;
}

double Circle::getRadius(){
    return radius;
}

string Circle::toString(){
    std::stringstream stream;
    stream << std::fixed << std::setprecision(1) << radius;
    std::string rad = stream.str();
    if (rad[rad.length()-1] == '0' && rad[rad.length()-2] == '.'){
        rad =  rad.substr(0, rad.size()-2);
    }
    return "Circle{radius="+rad+"}";
}

int main(int argc, char *argv[])
{

   return 0;

}

