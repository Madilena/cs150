
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <map>
#include <vector>
#include <cassert>
#include <unordered_map>
#include <cctype>
#include <iomanip>
using std::setw;
using std::right;
using std::left;

using namespace std;

void hoursWorked(string filePath) {
    string tmp = "";
    string text_string = "" ;
    std::ifstream text_file (filePath);
    std::vector<std::string> vecOfStr;

    if (text_file.is_open()) {
        while (std::getline(text_file, tmp)) {
            if(tmp.size() > 0)
                vecOfStr.push_back(tmp);
        }
    }
    for (int i = 0; i < vecOfStr.size(); i++) {
        vector<string> sep;
        stringstream ss(vecOfStr[i]); // Turn the string into a stream.
        string tok;

        while(getline(ss, tok, ' ')) {
            sep.push_back(tok);
        }

        string name ="";
        int id=0;
        double totalHrs=0;
        double avgHrs=0;
        int daysWorked = sep.size() - 2;

        for(int j=0; j<sep.size(); j++) {
            if(j==0) {
                id = stoi(sep[j]);
                continue;
//                id = stof(sep[i]);
            }
            if(j==1) {
                name = sep[j];
                continue;
            }
            totalHrs += stof(sep[j]);
        }
        avgHrs = totalHrs / daysWorked;
        cout << fixed << setprecision(2);

       cout << left << setw(8) << name <<  " (ID# " << right << setw(4)  <<id  << ") worked " << setprecision(1) << totalHrs << " hours (" << setprecision(2)<< avgHrs << "/day)" << endl;
    }
    text_file.close();
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
    hoursWorked("hoursworked.txt");
    return 0;

}
