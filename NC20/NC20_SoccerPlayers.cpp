
/****************************************************
 * AUTHOR: Madilena Mendiola
 * COURSE: CS 150: C++ Programming 1
 * SECTION: 1598
 * NC (PROJECT)#: <#20>
 * LAST MODIFIED: 2022-11-06
 *****************************************************/

/******************************************************
 * Soccer Players
 *
 * ****************************************************
 * PROGRAM DESCRIPTION:
 *Write a program that stores the following data about a soccer player in a structure:  
 *Player’s Name  
 *Player’s Jersey Number
 *Goals Scored by Player  
 *
 * ****************************************************
 * ALGORITHM:
 * loop through user responses and set values to struct pointers.
 *
 * ****************************************************
 * ALL IMPORTED LIBRARIES NEEDED AND PURPOSE:
 *
 * ****************************************************
 * */

#include <cstdlib>
#include <iostream>
#include <ctime>
#include <fstream>
#include <sstream>

using namespace std;

struct player {
    string name;
    int num;
    int goals;
};

int main(int argc, char *argv[])
{

    /***** CONSTANT SECTION *****/
    const int team_size = 11;

    /***** DECLARATION SECTION *****/
    player team[team_size];
    player highest_scorer;

    /***** INITIALIZATION SECTION *****/
    int total_goals = 0;
    int highest_goal = 0;

    /***** INTRO SECTION *****/
    // no intro

    /***** INPUT AND PROCESSING SECTION *****/
    for (int i = 0; i < team_size; i++) {

        player *pplayer = nullptr;
        player p;
        pplayer = &p;

        string line;

        string name_response;
        int num_response;
        int goals_response;

        cout << "name?"<< endl;
        getline(cin, name_response);

        cout << "number?"<< endl;
        cin.clear();
        cin >> num_response;

        cout << "goals?"<< endl;
        cin.clear();
        cin >> goals_response;

        total_goals += goals_response;

        (*pplayer).name = name_response;
        (*pplayer).num = num_response;
        (*pplayer).goals = goals_response;

        if (goals_response > highest_goal) {
            highest_goal = goals_response;
            highest_scorer = *pplayer;
        }

        team[i] = *pplayer;
        cin.ignore();
    }


    /***** OUTPUT SECTION *****/
    cout << "Name \t" << "Number \t" << "Goals \t" << endl;

    for(int i=0; i < team_size; i++) {
        if (team[i].name == highest_scorer.name){
            cout << team[i].name << "* \t"  << team[i].num << " \t"  <<team[i].goals << endl;
            continue;
        }
        cout << team[i].name << " \t"  << team[i].num << " \t"  <<team[i].goals << endl;
    }

    cout << "Total Goals: " << total_goals << endl;
    cout << "Leading Scorer: " << highest_scorer.name << " - " << highest_goal;

    return 0;
}
