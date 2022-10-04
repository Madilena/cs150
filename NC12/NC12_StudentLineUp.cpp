
/****************************************************
 * AUTHOR: Madilena Mendiola
 * COURSE: CS 150: C++ Programming 1
 * SECTION: 1598
 * NC (PROJECT)#: <#12>
 * LAST MODIFIED: 2022-10-03
 *****************************************************/

/******************************************************
 * Student Lineup
 *
 * ****************************************************
 * PROGRAM DESCRIPTION:
 * Write a program that opens the file "LineUp.txt" (attached to this assignment) then loops to read each of the names.
 *Once all the names have been read it reports which student would be at the front of the line and which one would be at the end of the line in alphabetical order.
 * ****************************************************
 * ALGORITHM:
 * declare variables for the first and last people in line.  also declare a variable for the name under test.  open the file of names, and read the first line.  set the first and last variables to this name.  then, loop through each name (line in the file) and iterate through each letter in the name and compare it to the variable values for first and last.
 * these comparisons are comparing the letters' ascii values.  where smaller letters have smalller ascii values and bigger letters have bigger ascii values.
 *
 * ****************************************************
 * ALL IMPORTED LIBRARIES NEEDED AND PURPOSE:
 *
 * ****************************************************
 * */

#include <cstdlib>
#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>

using namespace std;

int main(int argc, char *argv[])
{
    /***** CONSTANT SECTION *****/
    // no constants needed in this program

    /***** DECLARATION SECTION *****/
    string first;
    string last;
    string line;

    /***** INITIALIZATION SECTION *****/
    int line_count=0;

    /***** INTRO SECTION *****/
    cout << "This program will tell you who stands in the front and back of a line, based on their name."<< endl;

    /***** INPUT SECTION *****/
    std::ifstream lineup_file ("lineup.txt");

    /***** PROCESSING SECTION *****/

    if (lineup_file.is_open()) {
        while (lineup_file) {
            std::getline (lineup_file, line);

            if (line_count == 0) {
                first = line;
                last = line;
            } else {
                for (int i = 0; i < line.length(); i++) {
                    if (line[i] != first[i]) {
                        if (line[i] < first[i]) {
                            first = line;
                        } else if (line[i] > last[i]) {
                            last = line;
                        }
                        break;
                    } else {
                        continue;
                    }
                }
            }
            line_count++;
        }
    }
    lineup_file.close();

    /***** OUTPUT SECTION *****/
    cout << "Student at front of line: " << first << "\nStudent at back of line: " << last << endl;
    return 0 ;
}
