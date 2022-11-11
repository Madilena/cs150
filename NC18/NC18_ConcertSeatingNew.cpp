
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
const int MAX_ROWS = 15;
const int MAX_SEATS_PER_ROW = 30;
const char AVAILABLE_SEAT = '#';
const char TAKEN_SEAT = '*';

void initializeSeating(char seats[][MAX_SEATS_PER_ROW]);
void displaySeating(char seats[][MAX_SEATS_PER_ROW]);
void displayTicketPrices(double prices[]);
double calculateTxSales(char seats[][MAX_SEATS_PER_ROW], double prices[]);


int main(int argc, char *argv[])
{
    cout << "welcome"<< endl;
    char seats[MAX_ROWS][MAX_SEATS_PER_ROW];
    double ticketPrices[] = {
        5,5,5,5,5,
        3,3,3,3,3,
        1,1,1,1,1
    };
    initializeSeating(seats);
    seats[4][4] = TAKEN_SEAT;
    seats[4][5] = TAKEN_SEAT;
    seats[9][9] = TAKEN_SEAT;
    seats[15][29] = TAKEN_SEAT;

    displaySeating(seats);
    displayTicketPrices(ticketPrices);


	return 0;
}

void initializeSeating(char seats[][MAX_SEATS_PER_ROW]){
    for(int i = 0; i < MAX_ROWS; i++){
        for(int j = 0; j < MAX_SEATS_PER_ROW; j++){
            seats[i][j] = AVAILABLE_SEAT;
        }
    }
}

void displaySeating(char seats[][MAX_SEATS_PER_ROW]){
    cout << "seating chart";
    cout << "123456789012345678901234567890" << endl;
    for (int i=0; i< MAX_ROWS; i++){
        cout << "Row " << i+1<< "\t";
        for(int j=0; j < MAX_SEATS_PER_ROW;j++){
            cout << seats[i][j];
        }
        cout << endl;
    }
}

void displayTicketPrices(double prices[]){
    cout << fixed << setprecision(2) << setfill('0');
    cout << "\t ticket prices \n";
    for (int i=0; i < MAX_ROWS; i++){
        cout << "row " << i+1 << " \t$" << prices[i] << endl;
    }
}

double calculateTxSales(char seats[][MAX_SEATS_PER_ROW], double prices[]){
    double totalSales = 0;
    for (int i = 0; i < MAX_ROWS; i++){
        for (int j = 0; j < MAX_SEATS_PER_ROW; j++){
            if(seats[i][j] == TAKEN_SEAT){
                totalSales += prices[i];
            }
        }
    }
    return totalSales;
}
