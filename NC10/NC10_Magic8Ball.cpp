
/****************************************************
 * AUTHOR: Madilena Mendiola
 * COURSE: CS 150: C++ Programming 1
 * SECTION: 1598
 * NC (PROJECT)#: <#10>
 * LAST MODIFIED: 2022-09-27
 *****************************************************/

/******************************************************
 * Magic8 Ball
 *
 * ****************************************************
 * PROGRAM DESCRIPTION:
 *Write a program that simulates the Magic 8 Ball game.
 *
 *
 * ****************************************************
 * ALGORITHM:
 * set 8 ball values to constants.  have while loop for iterating the question and response with the user, until the user sets a value that breaks the while loop
 *
 * ****************************************************
 * ALL IMPORTED LIBRARIES NEEDED AND PURPOSE:
 *
 * ****************************************************
 * */

#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

int main(int argc, char *argv[])
{

    /***** CONSTANT SECTION *****/
    const string answ_one  = "It is certain";
    const string answ_two = "It is decidedly so";
    const string answ_three  = "Most likely";
    const string answ_four = "Signs point to yes";
    const string answ_five = "Reply hazy, try again.";
    const string answ_six = "Ask again later";
    const string answ_seven = "Don't count on it";
    const string answ_eight = "My sources say no";

    /***** DECLARATION SECTION *****/
    srand(time(NULL));
    string question;
    string answer_text;

    /***** INITIALIZATION SECTION *****/
    int count = 0;
    string play_again = "yes";

    /***** INTRO SECTION *****/
    // no intro section needed

    /***** INPUT SECTION *****/
    // no input section needed

    /***** PROCESSING SECTION *****/
    // processing also happens in output section

    /***** OUTPUT SECTION *****/
    cin.ignore();
    while (play_again == "yes" || play_again == "y") {
        if (count == 0) {
            cin.get();
        }
        cout << "What question would you like to ask the Magic 8 ball?" << endl;
        getline(cin, question);

        int answer = rand() % 8 + 1;

        switch (answer)
        {
        case 1 :
            answer_text = answ_one;
            break;
        case 2 :
            answer_text = answ_two;
            break;
        case 3 :
            answer_text = answ_three;
            break;
        case 4 :
            answer_text = answ_four;
            break;
        case 5:
            answer_text = answ_five;
            break;
        case 6:
            answer_text = answ_six;
            break;
        case 7:
            answer_text = answ_seven;
            break;
        case 8:
            answer_text = answ_eight;
            break;
        default :
            cout << "may your dreams come true!.\n";
            break;
        }

        cout << answer_text << endl;
        cout << "Would you like to play again?" << endl;
        cin >> play_again;
    }
    cout << "Thank you for playing with the Magic8 ball" << endl;
    count ++;
    return 0;

}
