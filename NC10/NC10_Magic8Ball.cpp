
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
    const string POSITIVE = "positive";
    const string NEUTRAL = "neutral";
    const string NEGATIVE = "negative";

    // positive
    const string answ_one  = "It is certain";
    const string answ_two = "It is decidedly so";
    const string answ_three  = "Most likely";
    const string answ_four = "Signs point to yes";
    const string answ_five = "As I see it, yes";
    const string answ_six = "Outlook good.";
    const string answ_seven = "Yes.";
    const string answ_eight = "Without a doubt";
    const string answ_nine = "Yes definitely";
    const string answ_ten = "You may rely on it.";
    // neutral
    const string answ_eleven = "Reply hazy, try again";
    const string answ_twelve = "Ask again later";
    const string answ_thirteen = "Better not tell you now";
    const string answ_fourteen = "Cannot predict now.";
    const string answ_fifteen = "Concentrate and ask again.";
    // negative
    const string answ_sixteen = "Don't count on it.";
    const string answ_seventeen = "My reply is no.";
    const string answ_eighteen = "My sources say no.";
    const string answ_nineteen = "Outlook not so good.";
    const string answ_twenty = "Very doubtful";

    /***** DECLARATION SECTION *****/
    srand(time(NULL));
    string question;
    string answer_text = "";
    string outcome = "";

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
    while (play_again == "yes" || play_again == "y") {

        cout << "What question would you like to ask the Magic 8 ball?" << endl;
        cin.ignore();
        getline(cin, question);

        if (count == 0) {
            cin.get();
        }

        int answer = rand() % 20 + 1;

        switch (answer)
        {
        case 1 :
            answer_text = answ_one;
            outcome = POSITIVE;
            break;
        case 2 :
            answer_text = answ_two;
            outcome = POSITIVE;
            break;
        case 3 :
            answer_text = answ_three;
            outcome = POSITIVE;
            break;
        case 4 :
            answer_text = answ_four;
            outcome = POSITIVE;
            break;
        case 5:
            answer_text = answ_five;
            outcome = POSITIVE;
            break;
        case 6:
            answer_text = answ_six;
            outcome = POSITIVE;
            break;
        case 7:
            answer_text = answ_seven;
            outcome = POSITIVE;
            break;
        case 8:
            answer_text = answ_eight;
            outcome = POSITIVE;
            break;
        case 9:
            answer_text = answ_nine;
            outcome = POSITIVE;
            break;
        case 10:
            answer_text = answ_ten;
            outcome = POSITIVE;
            break;
        case 11:
            answer_text = answ_eleven;
            outcome = NEUTRAL;
            break;
        case 12:
            answer_text = answ_twelve;
            outcome = NEUTRAL;
            break;
        case 13:
            answer_text = answ_thirteen;
            outcome = NEUTRAL;
            break;
        case 14:
            answer_text = answ_fourteen;
            outcome = NEUTRAL;
            break;
        case 15:
            answer_text = answ_fifteen;
            outcome = NEUTRAL;
            break;
        case 16:
            answer_text = answ_sixteen;
            outcome = NEGATIVE;
            break;
        case 17:
            answer_text = answ_seventeen;
            outcome = NEGATIVE;
            break;
        case 18:
            answer_text = answ_eighteen;
            outcome = NEGATIVE;
            break;
        case 19:
            answer_text = answ_nineteen;
            outcome = NEGATIVE;
            break;
        case 20:
            answer_text = answ_twenty;
            outcome = NEGATIVE;
            break;
        default :
            cout << "may your dreams come true!.\n";
            break;
        }

        cout << "The answer is: " << answer_text << endl;
        cout << "This answer is: " << outcome << endl;
        cout << "Would you like to play again?" << endl;
        cin >> play_again;
    }
    cout << "Thank you for playing with the Magic8 ball" << endl;
    count ++;
    return 0;

}
