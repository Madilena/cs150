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
#include <cmath>
using namespace std;

void wordStatsPlus(string filePath) {
    string tmp = "";
    string text_string = "" ;
    std::ifstream text_file (filePath);
    int numOfLines = 0;

    if (text_file.is_open()) {
        while (text_file) {
            getline(text_file, tmp  );
            numOfLines++;
            text_string += tmp + " " ;
        }
    }
    numOfLines = numOfLines - 1;
    text_file.close();

    vector<string> sep;
    stringstream ss(text_string); // Turn the string into a stream.
    string tok;

    while(getline(ss, tok, ' ')) {
        sep.push_back(tok);
    }

    double count=0;
    double numOfWords = 0;
    double uniqueLetters = 0;
    double totalWordLength=0;
    for(int i = 0; i < sep.size(); ++i) {
        string test = sep[i];
        if(test =="") {
            continue;
        }
        totalWordLength += sep[i].length();
        count += test.length();
        numOfWords++;
    }
    double avgWordsPerLine = numOfWords / numOfLines;

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

    double percOfAlph = floor(uniqueLetters/26*100);

    if (numOfWords == 0) {
        cout << "Error, bad input file." << endl;
    } else {
        cout << "Total lines = " << numOfLines << endl;
        cout << "Total words = " << numOfWords << endl;
        cout << "Total unique letters = " << uniqueLetters << " ("  << percOfAlph << "% of alphabet)" << endl;
        cout << "Average words/line = " << avgWordsPerLine << endl;
        cout << "Average word length = " << avg << endl;
    }
}

int main(int argc, char* argv[]) {
    wordStatsPlus("tobe.txt");
}
