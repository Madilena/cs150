#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

double highest(double array[], int length);
int lowest(double array[], int length);

int main() {
    const int TOTAL_SCORES = 7;
    double difficulty = 0;

    vector<double> scores;
    double sum = 0;
    double total = 0;

    cout << "Enter the difficulty of the dive (1.2-3.8): ";
    cin.clear();
    cin >> difficulty;

    while (difficulty < 1.2 || difficulty > 3.8) {
        cout << "Enter the difficulty of the dive (1.2-3.8): ";
        cin.clear();
        cin >> difficulty;
    }

    for (int i = 0 ; i < TOTAL_SCORES; i++) {
        double val = 0;
        cout << "Enter judge " << i + 1 << " score: " ;
        cin.clear();
        cin >> val;
        while (val < 0 || val > 10) {
            cout << "Enter judge " << i + 1 << " score: " ;
            cin.clear();
            cin >> val;
        }
        scores.insert(scores.end(), val);
    }

    sort(scores.begin(), scores.end(), greater<double>());
    scores.pop_back();
    scores.erase(scores.begin());

    sum = accumulate(scores.begin(), scores.end(), decltype(scores)::value_type(0));
    total = sum * difficulty * 0.6;
    cout << "Total score for the dive is " << total << endl;

    return 0;
}

