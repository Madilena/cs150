

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

void evenAverage() {
    double even_sum = 0;
    int count = 0;
    double avg;
    int val = 1;
    while (val !=0) {

        cout << "Integer? ";
        cin >> val;
        if (val ==0) {
            break;
        }
        if (val % 2 == 0) {
            int even_num = val;
            even_sum += even_num;
            count++;
        }
    }
    avg = (even_sum/count);
    cout << "Average: " << avg << endl;
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
    evenAverage();
    return 0;
}

