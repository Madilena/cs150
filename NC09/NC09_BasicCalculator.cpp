
/****************************************************
 * AUTHOR: Madilena Mendiola
 * COURSE: CS 150: C++ Programming 1
 * SECTION: 1598
 * NC (PROJECT)#: <#09>
 * LAST MODIFIED: 2022-09-28
 *****************************************************/

/******************************************************
 * Basic Calculator
 *
 * ****************************************************
 * PROGRAM DESCRIPTION:
 * Program a calculator that does different math operations.
 *
 *
 * ****************************************************
 * ALGORITHM:
 * create variables for operands, result, and operator.  set these values based on user input. have conditions for the different possible operators. set the result when a given condition is met.
 *
 * ****************************************************
 * ALL IMPORTED LIBRARIES NEEDED AND PURPOSE:
 *
 * ****************************************************
 * */

#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{

    /***** CONSTANT SECTION *****/
    // no constants needed

    /***** DECLARATION SECTION *****/
    double operand1;
    double operand2;
    double result;
    string math_operator;

    /***** INITIALIZATION SECTION *****/
    // no initialization needed

    /***** INTRO SECTION *****/

    /***** INPUT SECTION *****/
    // no input needed

    /***** PROCESSING SECTION *****/
    // no processing needed

    /***** OUTPUT SECTION *****/
    cout << "Enter operand 1: ";
    cin >> operand1;
    cout << "Enter operand 2: ";
    cin >> operand2;
    cout << "Enter operator: ";
    cin >> math_operator;
    if (math_operator == "+") {
        result = operand1 + operand2;
    } else if (math_operator == "-") {
        result = operand1 - operand2;
    } else if (math_operator == "*") {
        result = operand1 * operand2;
    } else if (math_operator == "%") {
        result = operand1 / operand2;
    } else if (math_operator == "^") {
        result = pow(operand1, operand2);
    }
    cout << "Your answer is: " << result << endl;
    return 0;


}
