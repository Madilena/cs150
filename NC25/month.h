#ifndef MONTH_H
#define MONTH_H

#include <iostream>
using namespace std;

class Month{
    private:
        string name;
        unsigned int number;

    public:
        Month();
        Month(string name, unsigned int number);
        string getName() const;
        unsigned int getNumber() const;
        bool setName(string name);
        bool setNumber(unsigned int number);
        string nameFromNumber(int number);
        void operator++(int);
        void operator--(int);
        friend ostream& operator<<(ostream& out, const Month& m);
        friend bool operator==(Month a, Month b);
        void operator=(const Month& month);
};


#endif
