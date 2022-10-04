
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
void evenSum() {
    int num_of_ints;
    int max_int;
    int even_sum;
    cout << "how many integers? ";
    cin >> num_of_ints;
    for (int i = 0; i < num_of_ints; i++) {

        int val;
        cout << "next integer? ";
        cin >> val;
        if (val % 2 == 0) {
            even_sum += val;

            if (i ==0) {
                max_int = val;
            } else if (val > max_int) {
                max_int = val;
            }
        }
    }

    cout << "even sum = " << even_sum << endl;
    cout << "even max = " << max_int << endl;
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
    evenSum();
    return 0;
}

