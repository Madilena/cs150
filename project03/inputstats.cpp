
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
#include <string>
using namespace std;

void inputStats(string filePath) {
    string tmp = "";
    string text_string = "" ;
    std::ifstream text_file (filePath);
    std::vector<std::string> vecOfStr;

    if (text_file.is_open()) {
        while (std::getline(text_file, tmp)) {
            vecOfStr.push_back(tmp);
        }
    }
    text_file.close();
    int numOfChars=0;
    int totalChars=0;
    int longestChars=0;
    double totalLines = vecOfStr.size();
    for(int i =0;i<totalLines;i++){
        numOfChars = vecOfStr[i].length();
        totalChars += numOfChars;
        if(numOfChars > longestChars){
            longestChars = numOfChars;
        }
        cout << "Line " << i+1 << " has " << numOfChars << " chars" << endl;
    }
    double avgChars = totalChars/totalLines;

//    cout << fixed << setprecision(2);
    if (totalLines==0){
        cout << ""<< endl;
    }else{
    cout  << totalLines << " lines; longest = "<<longestChars<<", average = "  << avgChars << endl;
    }
}

int main(int argc, char* argv[]) {
    inputStats("inputstats.txt");
}
