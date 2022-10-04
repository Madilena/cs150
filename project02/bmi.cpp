
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
#include <math.h>

using namespace std;

double calculate_BMI(double height, double weight) {
    return (weight / (pow(height, 2))) * 703;
}

int bmi_class(double bmi) {
    if(bmi < 18.5) {
        return 1;
    }	else if(bmi >= 18.5 && bmi <= 24.9) {
        return 2;
    } else if(bmi >= 25 && bmi <= 29.9) {
        return 3;
    } else if (bmi >= 30) {
        return 4;
    } else {
        return 0;
    }
}

int main()
{
    cout << "This program reads data for two people\nand computes their body mass index (BMI)." << endl;
    double height_1;
    double weight_1;
    double bmi_1;
    int class_1;
    cout << "\nEnter Person 1's information: " << endl;
    cout << "height (in inches)? ";
    cin >> height_1;
    cout << "weight (in pounds)? ";
    cin >> weight_1;
    bmi_1 = calculate_BMI(height_1, weight_1);
    class_1 = bmi_class(bmi_1);
    cout << "BMI = " << bmi_1 << ", class " << class_1 << endl;

    double height_2;
    double weight_2;
    double bmi_2;
    int class_2;
    cout << "\nEnter Person 2's information: " << endl;
    cout << "height (in inches)? ";
    cin >> height_2;
    cout << "weight (in pounds)? ";
    cin >> weight_2;
    bmi_2 = calculate_BMI(height_2, weight_2);
    class_2 = bmi_class(bmi_2);
    cout << "BMI = " << bmi_2 << ", class " << class_2 << endl;

    double bmi_diff = abs(bmi_1 - bmi_2);
    cout << "\nBMI difference = " << bmi_diff << endl;

    return 0;

}
