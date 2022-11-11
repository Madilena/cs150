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

void wordStats(string filePath) {
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

    double count=0;
    double numOfWords = 0;
    int uniqueLetters = 0;
    for(int i = 0; i < sep.size(); ++i) {
        string test = sep[i];
        if(test =="") {
            continue;
        }
        count += test.length();
        numOfWords++;
    }

    double avg = count / numOfWords;
    map<char, int> m;

    for (int i = 0; i < text_string.length(); i++) {
        if (text_string[i] == ' ' || !isalpha(text_string[i])) {
            continue;
        }
        char upper = toupper(text_string[i]);
        m.insert(make_pair(upper, 30));
    }
    uniqueLetters = m.size();

    if (numOfWords == 0) {
        cout << "Error, bad input file." << endl;
    } else {
        cout << "Total words    = " << numOfWords << endl;
        cout << "Average length = " << avg << endl;
        cout << "Unique letters = " << uniqueLetters << endl;
    }
}

int main(int argc, char* argv[]) {
    wordStats("tobe.txt");
}
