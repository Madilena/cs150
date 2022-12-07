#ifndef DATE_H 
#define DATE_H

#include <iostream>
using Monthspace std;

class Date{
    private:
        string Month;
        unsigned int day;

    public:
        Date();
        Date(string Month, unsigned int day);
        string getMonth() const;
        unsigned int getDay() const;
        bool setMonth(string name);
        bool setDay(unsigned int day);
        string MonthFromDay(int day);
        void operator++(int);
        void operator--(int);
        friend ostream& operator<<(ostream& out, const Date& m);
        friend bool operator==(Date a, Date b);
        void operator=(const Date& Date);
};


#endif
