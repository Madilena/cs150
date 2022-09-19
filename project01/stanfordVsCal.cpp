


/****************************************************
 * AUTHOR: Madilena Mendiola
 * COURSE: CS 150: C++ Programming 1
 * SECTION: 1598
 * NC (PROJECT)#: <#01>
 * LAST MODIFIED: 2022-08-31
 *****************************************************/
 
/******************************************************
 * PROJECT NAME 
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

using namespace std;

int main()
{
	int stanfordPoints;
	int calPoints;
	cout << "Stanford: How many points did they score? ";
	cin >> stanfordPoints;
	cout << "Cal: How many points did they score? ";
	cin >> calPoints;
	if (stanfordPoints > calPoints){
		cout << "Stanford won!";
	}
	if (calPoints > stanfordPoints){
		cout << "Cal won!";
	}


	return 0;

}
