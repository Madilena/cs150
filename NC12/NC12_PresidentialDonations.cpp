
/****************************************************
 * AUTHOR: Madilena Mendiola
 * COURSE: CS 150: C++ Programming 1
 * SECTION: 1598
 * NC (PROJECT)#: <#12>
 * LAST MODIFIED: 2022-10-02
 *****************************************************/

/******************************************************
 * Presidential Donations
 *
 * ****************************************************
 * PROGRAM DESCRIPTION:
 *Your task is to write a C++ application that searches through the file and displays the largest contribution, the smallest contribution and the average of all contributions made to the 2020 presidential campaign from zipcode 92056 for both Joe Biden and Donald Trump
 *
 * ****************************************************
 * ALGORITHM:
 * open the file and while the file is open read each line to get back the donation value.  convert the donation value string to a double and then compare it to the highest and lowest donation found thus far.  if it is the highest or lowest set it to the appropriate variable.  keep a count of how many times we read each line in the file so that we can get an average donation value.
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
    // no constants needed for this program

    /***** DECLARATION SECTION *****/
    string biden_string;
    string trump_string;

    /***** INITIALIZATION SECTION *****/
    double highest_biden_donation;
    double lowest_biden_donation;
    double total_sum_biden_donation = 0;
    int biden_donation_count;
    double avg_biden_donation;

    double highest_trump_donation;
    double lowest_trump_donation;
    double total_sum_trump_donation = 0;
    int trump_donation_count;
    double avg_trump_donation;

    /***** INTRO SECTION *****/
    cout << "Donation Figures for 2020 Presidenatial Election\n";

    /***** INPUT SECTION *****/
    // no inputs needed for this program.

    /***** PROCESSING SECTION *****/
    std::ifstream biden_file ("biden2020donation_simple-1.txt");

    if (biden_file.is_open()) {
        while (biden_file) {
            std::getline (biden_file, biden_string);
            double biden_donation = atof(biden_string.c_str());
            if (biden_donation > highest_biden_donation) {
                highest_biden_donation = biden_donation;
            } else if (biden_donation < lowest_biden_donation) {
                lowest_biden_donation = biden_donation;
            }
            total_sum_biden_donation += biden_donation;
            biden_donation_count++;
        }
    }
    biden_file.close();
    avg_biden_donation = total_sum_biden_donation / biden_donation_count;

    std::ifstream trump_file ("trump2020donation_simple-1.txt");

    if (trump_file.is_open()) {
        while (trump_file) {
            std::getline (trump_file, trump_string);
            double trump_donation = atof(trump_string.c_str());
            if (trump_donation > highest_trump_donation) {
                highest_trump_donation = trump_donation;
            } else if (trump_donation < lowest_trump_donation) {
                lowest_trump_donation = trump_donation;
            }
            total_sum_trump_donation += trump_donation;
            trump_donation_count++;
        }
    }
    trump_file.close();
    avg_trump_donation = total_sum_trump_donation / trump_donation_count;

    /***** OUTPUT SECTION *****/
    cout << "Joe Biden \nAverage Donation: $" << avg_biden_donation << " Smallest: $" << lowest_biden_donation << " Largest: $" << highest_biden_donation << endl;

    cout << "\nDonald Trump \nAverage Donation: $" << avg_trump_donation << " Smallest: $" << lowest_trump_donation << " Largest: $" << highest_trump_donation << endl;

    return 0;
}
