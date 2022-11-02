/****************************************************
* AUTHOR: Madilena Mendiola
* COURSE: CS 150: C++ Programming 1
* (PROJECT)#: CS 150 Midterm Exam
* LAST MODIFIED: October 13, 2022
*****************************************************/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

double stock_profit(int ns, double sp, double sc, double pp, double pc) {
    return ((ns * sp) - sc) - ((ns * pp) + pc);
}

void pac_count() {

    string pac_string;
    std::ifstream pac_file ("PACContributions2020-21.txt");
    double highest_pac_donation;
    double lowest_pac_donation;
    double total_sum_pac_donation = 0;
    int pac_donation_count;
    double avg_pac_donation;
    int pac_count = 0;
    double pac_donation = 0;
    if (pac_file.is_open()) {
        while (pac_file) {
            std::getline (pac_file, pac_string);
            pac_donation = atof(pac_string.c_str());
            if (pac_donation > highest_pac_donation) {
                highest_pac_donation = pac_donation;
            } else if (pac_donation < lowest_pac_donation) {
                lowest_pac_donation = pac_donation;
            }
            total_sum_pac_donation += pac_donation;
            pac_donation_count++;
        }
    }
    pac_file.close();
    avg_pac_donation = total_sum_pac_donation / pac_donation_count;

    cout << "PAC \nAverage Donation: $" << avg_pac_donation << " Smallest: $" << lowest_pac_donation << " Largest: $" << highest_pac_donation << endl;
    cout << "Total Pac donation amount: $" << total_sum_pac_donation <<endl;
    cout << "Total amount of contributions: " << pac_donation_count << endl;
}

int main(int argc, char* argv[]) {

    cout << "************************************************************************" << endl;
    cout << "**                                                                    **" << endl;
    cout << "**                      WELCOME TO YOUR NAME's                        **" << endl;
    cout << "**                          MIDTERM EXAM                              **" << endl;
    cout << "**                                                                    **" << endl;
    cout << "************************************************************************" << endl;
    cout << "** Please make a choice from the following options:                   **" << endl;
    cout << "** 1)  Demo Use of Nested Loops                                       **" << endl;
    cout << "** 2)  Demo Use of Functions                                          **" << endl;
    cout << "** 3)  Demo Use of Files                                              **" << endl;
    cout << "** 4)  Exit                                                           **" << endl;
    cout << "************************************************************************" << endl;

    int choice;
    cin >> choice;

    int lines = 7;
    int max_chars = 28;

    int ns = 0;
    double sp = 0;
    double sc = 0;
    double pp = 0;
    double pc = 0;
    double profit = 0;


    switch (choice) {
    case 1:
        for (int l = 0; l < lines; l++) {

            for (int i = 0; i < (l*2); i++) {
                cout << "*";
            }
            for (int i=0; i < max_chars - (l*4); i++) {
                cout << "$";
            }

            for (int i = 0; i < (l *2); i++) {
                cout << "*";
            }
            cout << endl;
        }
        break;
    case 2:

        cout << "Number of shares: " ;
        cin >> ns;
        cout << "Sale price per share: ";
        cin >> sp;
        cout << "Sale commision paid: ";
        cin >> sc;
        cout << "Purchase price per share: ";
        cin >> pp;
        cout << "Purchase commission paid: ";
        cin >> pc;

        cout << fixed << showpoint;

        cout << fixed << setprecision(2);
        profit = stock_profit(ns, sp, sc, pp, pc);

        cout << "profit is=" << profit << endl;
        break;
    case 3:

        cout << fixed << setprecision(2);
        pac_count();
        break;
    case 4:
        cout << "That's a wrap! Time for the weekend :)" << endl;
        break;
    default:
        cout << "Please enter a valid choice.";
        break;
    }
    return(EXIT_SUCCESS);
}
