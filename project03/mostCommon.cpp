#include <iomanip>
#include <cstdlib>
#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
#include <map>
#include <cassert>
#include <vector>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

string wordStats(string filePath) {
    string tmp = "";
    string text_string = "" ;
    std::ifstream text_file (filePath);

    if (text_file.is_open()) {
        while (text_file) {
            getline(text_file, tmp  );
            text_string += tmp + " " ;
            cout << "tmp text string" <<  tmp <<endl;
        }
    }
    text_file.close();
    cout << "final text string" <<  text_string <<endl;
    return text_string;
}

vector<string> split(string str, char delimiter) {
    vector<string> internal;
    stringstream ss(str); // Turn the string into a stream.
    string tok;

    while(getline(ss, tok, delimiter)) {
        internal.push_back(tok);
    }

    return internal;
}
int main(int argc, char **argv) {
//    string myCSV = "Ben Eric  Eric Marty Kim Eric Eric Marty";
    string myCSV = wordStats("dups.txt");
    vector<string> sep = split(myCSV, ' ');

    int count=0;
    string word ;
    for(int i = 0; i < sep.size(); ++i) {
        int testCount = 1;
        string test = sep[i];

        if(test == "") {
            continue;
        }

        for(int j =0; j<sep.size(); j++) {
            if (sep[j]==""){
                continue;
            }
            if (i == j) {
                continue;
            }
            if (test == sep[j] && test != "") {
                testCount++;
            }
        }
        if (testCount > count) {
            count = testCount;
            word = sep[i];
            cout << "word is: " << word <<endl;
            cout << "test is: " << test <<endl;
        }
    }

    cout << "highest count is: " << count << " for word " << word << endl;
}
