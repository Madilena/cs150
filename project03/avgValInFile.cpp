
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


using namespace std;
double averageValueInFile(string filePath){
    string tmp = "";
    string text_string = "" ;
    std::ifstream text_file (filePath);

    if (text_file.is_open()) {
        while (text_file) {
            getline(text_file, tmp  );
            text_string += tmp + " " ;
        }
    }
    text_file.close();

    vector<string> sep;
    stringstream ss(text_string); // Turn the string into a stream.
    string tok;

    while(getline(ss, tok, ' ')) {
        sep.push_back(tok);
    }
    
    double total = 0;
    double numOfVals = 0;
    double avg = 0;

    for(int i = 0; i < sep.size(); i++){
        string test = sep[i];
        if(test == ""){
            continue;
        }
        double val =  std::stod(test);
        total += val;
        numOfVals++;
    }

    avg = total/numOfVals;
    if (total == 0 || numOfVals == 0){
        avg = 0;
    }

    return avg;
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
    double avgval =  averageValueInFile("avgvalinfile.txt");
    cout << "avgval: " << avgval << endl;
	return 0;

}
