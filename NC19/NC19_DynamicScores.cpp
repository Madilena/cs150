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
#include <iomanip>

using namespace std;

int* bubbleSort(int n, int* ptr) {
    int i, j, t;

    for (int i = 0; i < n; i++) {

        for (int j = i+1; j < n; j++) {

            if(*(ptr + j) < *(ptr+i)) {

                t = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr+j) = t;

            }
        }
    }
    return ptr;
}


int getMode (int list[], int arraySize) {

    int count1=0;
    int count2=0;
    int mode=0;
    for(int j=0; j<arraySize; j++)
    {
        for(int i=0; i<arraySize; i++)
        {
            if(list[i]==list[j]) {
                count1++;
            }
        }
        if(count1>count2) {
            mode= list[j];
            count2=count1;
        }
        count1=0;
    }
    return mode;
}

int calcAvg(int arr[], int n) {
    double total = 0;
    double size = n;
    for (int i = 0; i< size; i++) {
        total += arr[i];
    }
    double avg = total / size;
    return avg;
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

    // needs to return mode
    // needs to return average
    // needs to return sorted list of scores

    int arr[] = {0, 5, 10, 15, 20, 5, 22};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "\nbefore sort"<< endl;
    for (int i =0; i < n; i ++) {
        cout << arr[i] << " " ;
    }
    int avg = calcAvg(arr, n);
    int *sortedArray = bubbleSort(n, arr);

    int mode = getMode(sortedArray, n);

    cout << "\nafter sort"<< endl;
    for (int i =0; i < n; i ++) {
        cout << sortedArray[i] << " " ;
    }
    cout << "\nmode: " << mode << endl;
    cout << "\navg: " << avg << endl;
    return 0;

}
