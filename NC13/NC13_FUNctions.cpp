
/****************************************************
 * AUTHOR: Madilena Mendiola
 * COURSE: CS 150: C++ Programming 1
 * SECTION: 1598
 * NC (PROJECT)#: <#13>
 * LAST MODIFIED: 2022-08-31
 *****************************************************/

/******************************************************
 * FUNctions
 *
 * ****************************************************
 * PROGRAM DESCRIPTION:
 *#1)   Write a function named countCapitals that accepts a string as input.  The function should count the number of capital letters in the input string and return that number.

#2) Write a function named countLowercaseLetters that accepts a string as input.  The function should count the number of lowercase letters in the input string and return that number.

#3) Write a function named countVowels that accepts a string as input.  The function should count the number of vowels in the input string and return that number.

#4) Finally, write a function named countConsonants that accepts a string as input.  The function should count the number of consonants in the input string and return that number.
 *
 *
 * ****************************************************
 * ALGORITHM:
 *
 *
 * ****************************************************
 * ALL IMPORTED LIBRARIES NEEDED AND PURPOSE:
 *
 * ****************************************************
 * */

#include <cctype>
#include <cstdlib>
#include <cstring>
#include <iostream>

using namespace std;

int countCapitals(string text) {
    int capital = 0;
    for (int i = 0; i < text.length(); i++) {
        if(isupper(text[i])) {
            capital++;
        } else {
            continue;
        }
    }
    return capital;
}

int countLowerCaseLetters(string text) {
    int lower = 0;
    for (int i = 0; i < text.length(); i++) {
        if(islower(text[i])) {
            lower++;
        } else {
            continue;
        }
    }
    return lower;
}

bool isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int countVowels(string text) {
    int vowel = 0;
    for (int i = 0; i < text.length(); i++) {
        if(isVowel(text[i])) {
            vowel++;
        } else {
            continue;
        }
    }
    return vowel;
}

int countConsonants(string text) {
    int consonant= 0;
    for (int i = 0; i < text.length(); i++) {

        if((isalpha(text[i]) && !isVowel(text[i]))) {
            cout << "this is a consonant " << text[i] << endl;
            consonant++;
        } else {
            continue;
        }
    }
    return consonant;
}


int main(int argc, char *argv[])
{

    /***** CONSTANT SECTION *****/
    /***** DECLARATION SECTION *****/
    /***** INITIALIZATION SECTION *****/
    /***** INTRO SECTION *****/
    /***** INPUT SECTION *****/
    /***** PROCESSING SECTION *****/
    /***** OUTPUT SECTION *****/

    cout << "Welcome to the character counter program we will count all sorts of strings." << endl;

    string userInput;
    cout << "Please enter your string:";
//    cin.ignore();
    getline(cin, userInput);

    cout << "length of text " << userInput.length() << endl;
    int capitals = countCapitals(userInput);
    int lowercase = countLowerCaseLetters(userInput);
    int vowels = countVowels(userInput);
    int consonants = countConsonants(userInput);

    cout << "Number of capitals = " << capitals << endl;
    cout << "Number of lowercase = " << lowercase << endl;
    cout << "Number of vowels = " << vowels<< endl;
    cout << "Number of consonants = " << consonants << endl;
    return 0;
}

