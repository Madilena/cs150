#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
#include <map>
#include <cassert>

using namespace std;

void wordStats(string filePath) {
    string tmp;
    string pac_string;
    std::ifstream pac_file (filePath);

    if (pac_file.is_open()) {
        while (pac_file) {
            pac_file.get();
            getline(pac_file, tmp);
            pac_string += tmp;
        }
    }
    pac_file.close();

    int numOfLetters= 0;
    for(int i = 0; i < pac_string.length(); i++) {
        if (pac_string.at(i) != ' ' && pac_string.at(i) != '.' && pac_string.at(i) != ',') {
            numOfLetters++;
        }
    }

    int numOfWords = 1;
    for (int i = 0; i < pac_string.length(); i++) {
        if (pac_string.at(i) == ' ') {
            if(pac_string.at(i-1) != ' ') {
                numOfWords++;
            }
        }
    }

    map<char, int> m;

    for (int i = 0; i < pac_string.size(); i++) {
        m[pac_string.at(i)] = i;
    }

    double avgLength = numOfLetters / numOfWords;

    cout << "Total words    = " << numOfWords << endl;
    cout << "Average length = " << avgLength << endl;
    cout << "Unique letters = " << m.size() << endl;
}

int main(int argc, char* argv[]) {
    wordStats("tobe.txt");
}
