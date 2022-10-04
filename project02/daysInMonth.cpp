
/****************************************************
 * AUTHOR: Madilena Mendiola
 * COURSE: CS 150: C++ Programming 1
 * SECTION: 1598
 * NC (PROJECT)#: <#01>
 * LAST MODIFIED: 2022-08-31
 *****************************************************/

/******************************************************
 * PROJECT NAME
 *
 * ****************************************************
 * PROGRAM DESCRIPTION:
 *
 *
 * ****************************************************
 * ALGORITHM:
 *
 *
 * ****************************************************
 * ALL IMPORTED LIBRARIES NEEDED AND PURPOSE:
 *
 * ****************************************************
 * */

#include <cstdlib>
#include <iostream>

using namespace std;
int daysInMonth(int month_num) {
    int days;
    switch (month_num)
    {
    case 1 :
        days = 31;
        break;
    case 2 :
        days = 28;
        break;
    case 3 :
        days = 31;
        break;
    case 4 :
        days = 30;
        break;
    case 5 :
        days = 31;
        break;
    case 6 :
        days = 30;
        break;
    case 7 :
        days = 31;
        break;
    case 8 :
        days = 31;
        break;
    case 9 :
        days = 30;
        break;
    case 10 :
        days = 31;
        break;
    case 11 :
        days = 30;
        break;
    case 12 :
        days = 31;
        break;
    default :
        cout << "Not a valid month.\n";
        break;
    }
    return days;


}

int main(int argc, char *argv[])
{

    /***** CONSTANT SECTION *****/
    /***** DECLARATION SECTION *****/
    /***** INITIALIZATION SECTION *****/
    /***** INTRO SECTION *****/
    /***** INPUT SECTION *****/
    /***** PROCESSING SECTION *****/
    /***** OUTPUT SECTION *****/
    daysInMonth(3);
    return 0;

}
