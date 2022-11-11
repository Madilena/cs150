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

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <iostream>
#include <string>
#include <fstream>


using namespace std;

const int ROW_SIZE = 3;
const int COL_SIZE = 3;

int* readData() {

    int rowPrices[ROW_SIZE];

    string inFileName = "row_price.txt";
    ifstream inFile;
    inFile.open(inFileName.c_str());

    if (inFile.is_open())
    {
        for (int i = 0; i < ROW_SIZE; i++)
        {
            inFile >> rowPrices[i];
            cout << rowPrices[i] << " ";
        }

        inFile.close(); // CLose input file
    }
    else { //Error message
        cerr << "Can't find input file " << inFileName << endl;
    }
    return rowPrices;
}

int** printSeats(int in, int jn) {

    int** data  ;

    data[0][0] = *new int(1);
    data[0][1] = *new int(1);
    data[0][2] = *new int(1);

    data[1][0] = *new int(0);
    data[1][1] = *new int(0);
    data[1][2] = *new int(0);

    for(int i = 0; i < ROW_SIZE; i++) {
        for(int j = 0; j < COL_SIZE; j++) {
            cout << data[i][j] << " " ;
        }
    }
    return data;
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
    int urow;
    int ucol;

    int** data = 0;
    data = printSeats(0,0);

    cout << "which row?" << endl;
    cin >> urow;

    cout << "which seat?" <<endl;
    cin >> ucol;

    if(data[urow][ucol] != 1) {
        cout << "congrats that seat is available" <<endl;
        data[urow][ucol] = 1;
    }

    int *rowPrices;
    rowPrices = readData();

    /*
        for(int i =0; i < ROW_SIZE; i++){
            cout << *rowPrices  << endl;
            rowPrices++;
        }
    */
    return 0;
}
