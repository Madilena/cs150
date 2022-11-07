
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

#include <cstdlib>
#include <iostream>
#include <ctime>
#include <fstream>

using namespace std;

struct player {
    string name;
    int num;
    int goals;
};

int main(int argc, char *argv[])
{

    /***** CONSTANT SECTION *****/
    /***** DECLARATION SECTION *****/
    /***** INITIALIZATION SECTION *****/
    /***** INTRO SECTION *****/
    /***** INPUT SECTION *****/
    /***** PROCESSING SECTION *****/
    /***** OUTPUT SECTION *****/
    const int team_size = 11;
    player team[team_size];


    for (int i = 0; i < team_size; i++) {

        player *pplayer = nullptr;
        player p;
        pplayer = &p;

        string name_response;
        int num_response;
        int goals_response;

        cout << "name?"<< endl;
        cin.ignore();
        getline(cin, name_response);

        cout << "number?"<< endl;
        cin.clear();
        cin >> num_response;

        cout << "goals?"<< endl;
        cin.clear();
        cin >> goals_response;

        (*pplayer).name = name_response;
        (*pplayer).num = num_response;
        (*pplayer).goals = goals_response;

        //player new_player = new player(name_response, num_response, goals_response);
        team[i] = *pplayer;

    }
    return 0;
}
