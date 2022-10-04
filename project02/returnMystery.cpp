
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
int mystery(int b, int c)
{
	return c+2 *b;
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
	int a = 4;
	int b = 2;
	int c = 5;
	a = mystery(c, b);
	c = mystery(b, a);
	cout << a << " " << b << " " << c << endl;
	return 0;

}
