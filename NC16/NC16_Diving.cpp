#include <iostream>
using namespace std;

double highest(double array[], int length);
int lowest(double array[], int length);

int main() {
    const int TOTAL_SCORES = 7;
//    double scores[] = {9.0, 8.9, 8.4, 9.2, 9.0, 9.1, 8.8};
    double difficulty = 0;

    double *scores= new double[TOTAL_SCORES];
    cout << "Enter the difficulty of the dive (1.2-3.8): ";
    cin.clear();
    cin >> difficulty;

    for (int i = 0 ; i < TOTAL_SCORES; i++) {
        cout << "Enter judge " << i + 1 << " score: " ;
        cin.clear();
        cin >> scores[i];
    }

    double sum = 0;
    double high = 0;
    double low = 0;
    double total = 0;

    low = scores[lowest(scores, TOTAL_SCORES)];
    high = highest(scores, TOTAL_SCORES);


    for (int i = 0; i < TOTAL_SCORES; i++) {
        if (scores[i] == low || scores[i] == high) {
            continue;
        } else {
            sum += scores[i];
        }
    }

    total = sum * difficulty * 0.6;
    cout << "Total score is " << total << endl;

    return 0;
}

double highest(double array[], int length) {
    double highValue = array[0];
    for(int i = 1; i < length; i++) {
        if (array[i] > highValue) {
            highValue = array[i];
        }
    }
    return highValue;
}

int lowest(double array[], int length) {
    int smallIndex =  0;
    for(int i = 0; i < length; i++) {
        if (array[smallIndex] > array[i]) {
            smallIndex = i;
        }
    }
    return smallIndex;
}
