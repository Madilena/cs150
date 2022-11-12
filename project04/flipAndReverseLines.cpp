#include <iostream>
#include <string>
#include <algorithm>
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
#include <bits/stdc++.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string>
#include <fstream>
using namespace std;

int flipAndReverseLines() {
    string filePath = "";
    bool doesFileExist=false;
    do{
        cout << "Input file name? " ;
        getline(cin, filePath);

        ifstream f(filePath.c_str());
        doesFileExist = f.good();

        if(!doesFileExist){
            cout << "Unable to open that file.  Try again." << endl;
        }

    }while(!doesFileExist);

    string tmp = "";
    string text_string = "" ;
    std::ifstream text_file (filePath);
    std::vector<std::string> sep;

    if (text_file.is_open()) {
        while (std::getline(text_file, tmp)) {
            sep.push_back(tmp);
        }
    }
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
        std::reverse(sep[i].begin(), sep[i].end());
    }

    cout << endl;
    for(int i =0; i<sep.size(); i++) {
        cout << sep[i] << endl;
    }
    return sep.size();
}
int main(int argc, char* argv[]) {
    flipAndReverseLines();
}
