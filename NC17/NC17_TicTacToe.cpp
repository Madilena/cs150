//tic tac toe
#include <iostream>
using namespace std;

const int SIZE = 3;
void initializeBoard(char board [][SIZE]);
void displayBoard(char board[][SIZE]);
bool checkWinner(char board[][SIZE], char symbol);

int main() {
    char board[SIZE][SIZE];
    initializeBoard(board);
    displayBoard(board);
    //testing loser
    board[0][0] = 'X'; board[0][1] = 'X'; board[0][2] = '*';
    board[1][0] = 'O'; board[1][1] = 'O'; board[1][2] = '*';
    board[2][0] = 'X'; board[2][1] = '*'; board[2][2] = '*';
    displayBoard(board);
    cout << "Is winner?(0)" << checkWinner(board, 'O') << endl;;
    //testing loser for O but winner for X
    board[0][0] = 'X'; board[0][1] = 'X'; board[0][2] = 'O';
    board[1][0] = 'O'; board[1][1] = 'X'; board[1][2] = 'O';
    board[2][0] = 'X'; board[2][1] = 'O'; board[2][2] = 'X';
    displayBoard(board);
    cout << "Is winner?(0)" << checkWinner(board, 'O') << endl;    
    cout << "Is winner?(1)" << checkWinner(board, 'X') << endl;    
    
    //testing winner
    board[0][0] = 'X'; board[0][1] = 'X'; board[0][2] = 'X';
    board[1][0] = 'O'; board[1][1] = 'O'; board[1][2] = '*';
    board[2][0] = 'X'; board[2][1] = '*'; board[2][2] = '*';
    displayBoard(board);
    cout << "Is winner?(1)" << checkWinner(board, 'X') <<endl;
    //testing winner for O
    board[0][0] = 'X'; board[0][1] = 'O'; board[0][2] = 'X';
    board[1][0] = 'O'; board[1][1] = 'O'; board[1][2] = '*';
    board[2][0] = 'O'; board[2][1] = 'O'; board[2][2] = 'X';
    displayBoard(board);
    cout << "Is O winner?(1)" << checkWinner(board, 'O') <<endl; 
    cout << "Is X winner?(0)" << checkWinner(board, 'X') <<endl;    
    
    //testing winner for X
    board[0][0] = 'X'; board[0][1] = 'O'; board[0][2] = 'X';
    board[1][0] = 'O'; board[1][1] = 'X'; board[1][2] = '*';
    board[2][0] = 'O'; board[2][1] = '*'; board[2][2] = 'X';
    displayBoard(board);
    cout << "Is winner?(1)" << checkWinner(board, 'X') <<endl;
   //testing winner X diagonal ur to ll
    board[0][0] = 'X'; board[0][1] = '*'; board[0][2] = 'X';
    board[1][0] = 'O'; board[1][1] = 'X'; board[1][2] = '*';
    board[2][0] = 'X'; board[2][1] = '*'; board[2][2] = '*';
    displayBoard(board);
    cout << "Is winner?(1)" << checkWinner(board, 'X') <<endl;
}
void initializeBoard(char board [][SIZE]) {
    //initialize board
    for (int row = 0; row < SIZE; row++) {
        for(int column = 0; column < SIZE; column++) {
            board[row][column] = '*';
        }
    }
}
void displayBoard(char board[][SIZE]) {
    cout << "   ";
    for (int column = 0; column < SIZE; column++) {
        cout << column+1 << "|";
    }
    cout << endl;
    cout << "  -";
    for(int column = 0; column < SIZE; column++) {
        cout << "--";
    }
        
    cout << endl;
    
    for (int row = 0; row < SIZE; row++) {
        cout << row+1 << " |";
        for(int column = 0; column < SIZE; column++) {
            cout << board[row][column] << "|";
        }
        cout << endl;
        cout << "  -";
        for(int column = 0; column < SIZE; column++) {
            cout << "--";
        }
        
        cout << endl;
    }
}
bool checkWinner(char board[][SIZE], char symbol) {
    //first check if a row has a winner
    for(int row = 0; row < SIZE; row++) {
        bool matched = true;
        for (int column = 0; column < SIZE; column++) {
            if (board[row][column] != symbol) {
                matched = false;
            }
        }
        if(matched) {
            return true;
        }            
    }
    //next if column has a winner
    //check each column for winner
    for (int column = 0; column < SIZE; column++) {
        bool matched = true;
        for (int row = 0; row < SIZE; row++) {
            if(board[row][column] != symbol) {
                matched = false;
            }                
        }
        if(matched) {
            return true;
        }
    }
    //check for diagonal match upper left to lower right
    bool matched = true;
    for (int i = 0; i < SIZE; i++) {
        if(board[i][i] != symbol) {
            matched = false;
        }
    }
    if(matched) {
        return true;
    }
    //check for diagonal match upper right to lower left
    matched = true;
    for (int i = 0; i < SIZE; i++) {
        if(board[i][SIZE-1-i] != symbol) {
            matched = false;
        }
    }
    if(matched) {
        return true;
    }
    
    return false;
}
