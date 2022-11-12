#include <cstdlib>
#include <iostream>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
#include <map>
#include <vector>
#include <cassert>
#include <unordered_map>
#include <cctype>
#include <cmath>
#include <mutex>
using namespace std;
void leetSpeak(string input, string output) {
    string tmp = "";
    string text_string = "" ;
    std::ifstream text_file (input);
    std::vector<std::string> sep;

    if (text_file.is_open()) {
        while (std::getline(text_file, tmp)) {
            sep.push_back(tmp);
        }
    }

    map<char, char> m;
    m.insert(pair<char,int>('o', '0'));
    m.insert(pair<char,int>('l', '1'));
    m.insert(pair<char,int>('e', '3'));
    m.insert(pair<char,int>('a', '4'));
    m.insert(pair<char,int>('t', '7'));

    ofstream myfile;
    myfile.open (output);

    for(int j=0; j<sep.size();j++){
        size_t start_pos = 0;
        string from = " " ;
        string to = ") (";

        while((start_pos = sep[j].find(from, start_pos)) != std::string::npos) {
            sep[j].replace(start_pos, from.length(), to);
            start_pos += to.length(); // Handles case where 'to' is a substring of 'from'
        }
    }

    for(int l = 0; l<sep.size(); l++) {
        for(int k =1; k < sep[l].length(); k++) {
            if (sep[l][k]=='s' && iswalnum(sep[l][k-1]) && (sep[l][k+1] ==')' )) {
                sep[l][k]='Z';
            }
        }
        if(sep[l][sep[l].length()-1]=='s'){
            sep[l][sep[l].length()-1]='Z';
        }

    }

    for(int i = 0; i < sep.size(); i++) {
        string s= sep[i];
        replace( s.begin(), s.end(), 'o', m.at('o'));
        replace( s.begin(), s.end(), 'l', m.at('l'));
        replace( s.begin(), s.end(), 'e', m.at('e'));
        replace( s.begin(), s.end(), 'a', m.at('a'));
        replace( s.begin(), s.end(), 't', m.at('t'));

        if (s != "") {
            s = "(" + s + ")";
        }
        myfile << s <<"\n";

    }

    myfile.close();
}

int main(int argc, char *argv[])
{
    leetSpeak("lsinput.txt","lsoutput.txt");
    return 0;
}
