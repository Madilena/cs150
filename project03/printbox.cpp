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
#include <stdexcept>
#include <iomanip>
using std::setw;
using std::right;
using std::left;


using namespace std;

void printBox(string filePath, int len) {
    if (len < 2) {
        throw int();
    }
    len = len -2;
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

    double totalLines = vecOfStr.size();
    if (totalLines > 0) {
        for (int i=0; i<len+2; i++) {
            cout << "#";
        }
        cout << "\n";

        for(int i =0; i<totalLines; i++) {
            string sub = vecOfStr[i].substr(0,len);
            for(int j=0; j<sub.length(); j++) {
                if (j==0) {
                    sub[0] = toupper(sub[0]);
                    continue;
                }
                sub[j] = tolower(sub[j]);
            }

            cout << "#" << left << setw(len ) <<sub << "#" << endl;
        }

        for (int i=0; i<len+2; i++) {
            cout << "#";
        }
        cout << "\n";
    }
}
int main(int argc, char* argv[]) {
    printBox("printbox.txt", 7);
}
