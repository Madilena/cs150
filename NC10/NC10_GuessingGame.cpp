
/****************************************************
 * AUTHOR: Madilena Mendiola
 * COURSE: CS 150: C++ Programming 1
 * SECTION: 1598
 * NC (PROJECT)#: <#10>
 * LAST MODIFIED: 2022-09-28
 *****************************************************/

/******************************************************
 * Guessing Game
 *
 * ****************************************************
 * PROGRAM DESCRIPTION:
 *Have the computer generate a random number between 1 and 100 and then have the user guess the number.
 *
 * ****************************************************
 * ALGORITHM:
 * have a while loop that exits when the user gets the right guess.  also have a counter to count how many iterations you're in the while loop, which asks the user to guess the random number
 *
 * ****************************************************
 * ALL IMPORTED LIBRARIES NEEDED AND PURPOSE:
 *
 * ****************************************************
 * */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{

    /***** CONSTANT SECTION *****/
    // no constants needed in this program.

    /***** DECLARATION SECTION *****/
    int guess = 10001;
    int count = 0;

    /***** INITIALIZATION SECTION *****/
    int answer = rand() % 100 + 1;

    /***** INTRO SECTION *****/
    cout << "Welcome to the guessing game where you can win millions*!!\n(*grains of sand)" << endl;

    /***** INPUT SECTION *****/
    // no inputs needed in this program

    /***** PROCESSING SECTION *****/
    // no processing needed in this program.

    /***** OUTPUT SECTION *****/
    cout << "Let's see how many guesses you need to guess my number between 1 - 100" << endl;

    while (guess != answer) {
        cout << "Guess: ";
        cin >> guess;
        if (guess < answer) {
            cout << "Your guess was too low." << endl;
        } else if (guess > answer) {
            cout << "Your guess was too high." << endl;
        }
        count++;
    }
    if (guess == answer) {
        cout << "Great guess! You found the correct answer in " << count << " guesses." << endl;
    }
    return 0;
}
