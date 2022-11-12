//seating chart
#include <iostream>
#include <iomanip>
using namespace std;
const int MAX_ROWS = 15;
const int MAX_SEATS_PER_ROW = 30;
const char AVAILABLE_SEAT = '#';
const char TAKEN_SEAT = '*';
void initializeSeating(char seats[][MAX_SEATS_PER_ROW] );
void displaySeating(char seats[][MAX_SEATS_PER_ROW] );
void displayTicketPrices(double prices[]);
double calculateTxSales(char seats[][MAX_SEATS_PER_ROW], double prices[]);
int main() {
    cout << "Welcome to the seating chart program" << endl;;
    char seats[MAX_ROWS][MAX_SEATS_PER_ROW];
    double ticketPrices[] = {
        5, 5, 5, 5, 5, //first 5 rows are premium seats
        3, 3, 3, 3, 3, // middle 5 rows are general
        1, 1, 1, 1, 1 //last 5 rows are nose bleed        
    };
    initializeSeating(seats);
    //test seating chart
    seats[4][4] = TAKEN_SEAT;
    seats[4][5] = TAKEN_SEAT;
    seats[9][9] = TAKEN_SEAT;
    seats[14][29] = TAKEN_SEAT;
    
    displaySeating(seats);
    displayTicketPrices(ticketPrices);
    cout << "Total Sales: $" << calculateTxSales(seats, ticketPrices) << endl;
}
void initializeSeating(char seats[][MAX_SEATS_PER_ROW] ) {
    for(int i = 0; i < MAX_ROWS; i++) {
        for(int j = 0; j < MAX_SEATS_PER_ROW; j++) {
            seats[i][j] = AVAILABLE_SEAT;
        }
    }
}
void displaySeating(char seats[][MAX_SEATS_PER_ROW] ) {
    cout << "\t\t\t\tSeating Chart\n"; 
    cout << "\t\t123456789012345678901234567890\n";
    for(int i = 0; i < MAX_ROWS; i++) {
        cout << "Row " << i+1 <<"\t";
        for(int j = 0; j < MAX_SEATS_PER_ROW; j++) {
            cout << seats[i][j];
        }
        cout << endl;
    }
}
void displayTicketPrices(double prices[]) {
    cout << fixed << setprecision(2) << setfill('0');
    cout << "\tTicket Prices\n";
    for(int i = 0; i < MAX_ROWS; i++) {
        cout << "Row " << i+1 << " - \t$" << prices[i] << endl;
    }
}
double calculateTxSales(char seats[][MAX_SEATS_PER_ROW], double prices[]) {
    double totalSales = 0;
    for(int i = 0; i < MAX_ROWS; i++) {
        for(int j = 0; j < MAX_SEATS_PER_ROW; j++) {
            if(seats[i][j] == TAKEN_SEAT) {
               totalSales += prices[i]; 
            }
        }
    }
    return totalSales;
}
