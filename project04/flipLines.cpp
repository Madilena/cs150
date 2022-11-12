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

void flipLines(string filePath) {
    string tmp = "";
    string text_string = "" ;
    std::ifstream text_file (filePath);
    std::vector<std::string> sep;

    if (text_file.is_open()) {
        while (std::getline(text_file, tmp)) {
            sep.push_back(tmp);
        }
    }
    if(sep.size() == 0) {
        cout << "Unable to open input file \""+ filePath+ "\"!" << endl;
    } else {
        text_file.close();

        int n = sep.size();
        for(int i = 0; i <n; ++i) {
            for(int j = i + 1; j < n; j++)
            {
                // If current element is even
                // then swap it with odd
                if ( i % 2 == 0 &&
                        j % 2 != 0)
                {
                    // Perform Swap
                    string tmp = sep[i];
                    sep[i] = sep[j];
                    sep[j] = tmp;
                    break;
                }
            }
        }

        for(int i =0; i < sep.size(); i++) {
            string txt = sep[i];
            for(int j=0; j<sep[i].size(); j++) {
                if(i%2 == 0) {
                    sep[i][j] = toupper(txt[j]);
                } else if (i%2 !=0) {
                    sep[i][j] = tolower(txt[j]);
                }
            }
        }
        for(int i =0; i<sep.size(); i++) {
            cout << sep[i] << endl;
        }
    }
}

int main(int argc, char* argv[]) {
    flipLines("fliplines.txt");
}
