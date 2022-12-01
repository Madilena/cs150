#ifndef MONTH_H
#define MONTH_H

#include <iostream>
using namespace std;

class Month{
    private:
        unsigned string name;
        unsigned int number;
    public:
        Month();
        Month(string name, insigned int number);
        unsigned string getName() const;
        unsigned int getNumber() const;
        bool setName(string name);
        bool setNumber(unsigned int number);
        void operator++(int);
        void operator--(int);
        friend ostream& operator<<(ostream& out, const& m);
        friend bool operator==(Month a, Month b);
        void operator=(const Month& month);
};


#endif
