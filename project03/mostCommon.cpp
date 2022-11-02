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

}
/* 
vector<string> stuff(){
 std::string s = "This is a string.";

  std::vector<std::string> array;
  std::stringstream ss(s);
  std::string tmp;
  while(std::getline(ss, tmp, ' '))
  {
    array.push_back(tmp);
  }

  for(auto it = array.begin(); it != array.end(); ++it)
  {
    std::cout << (*it) << std:: endl;
  }
  return array;
}*/
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
//  string myCSV = "one two three four"; 
  string myCSV = "Ben Eric  Eric Marty Kim";
  vector<string> sep = split(myCSV, ' '); 
 
  // If using C++11 (which I recommend) 
  /* for(string t : sep) 
   *  cout << t << endl; 
   */ 
 
  for(int i = 0; i < sep.size(); ++i) 
    cout << sep[i] << endl; 
} 
