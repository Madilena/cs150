

/****************************************************
 * AUTHOR: Madilena Mendiola
 * COURSE: CS 150: C++ Programming 1
 * SECTION: 1598
 * NC (PROJECT)#: <#07>
 * LAST MODIFIED: 2022-09-19
 *****************************************************/
 
/******************************************************
 * Basal Metabolic Rate 
 *
 * ****************************************************
 * PROGRAM DESCRIPTION:
 * Write a C++ program that estimates the number of calories your body expends at rest (without exercise). Increase the bmr depending on the user's activity level. 
 *
 * ****************************************************
 * ALGORITHM:
 * use formulas to calculate bmr:
 * The calories needed for a woman to maintain her weight is:
 * BMR (calories) = 655 + (4.35 * weight in pounds) + (4.7 * height in inches) - (4.7 * age in years)
 * The calories needed for a man to maintain his weight is:
 * BMR (calories) = 66 + (6.23 * weight in pounds) + (12.7 * height in inches) - (6.8 * age in years)
 * Increase the bmr by a percentage depending on the user's activity level.
 *
 * ****************************************************
 * ALL IMPORTED LIBRARIES NEEDED AND PURPOSE:
 *
 * ****************************************************
 * */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{

	/***** CONSTANT SECTION *****/
	const int chocolate_bar_calories = 230;
 
	/***** DECLARATION SECTION *****/
	double weight;
	double height;
	int age;
	double male_bmr_calories;
	double female_bmr_calories;
	double avg_caloric_needs;
	int num_of_daily_chocolate_bars;
	int activity_level;
	double bmr_activity_increase;
	
	/***** INITIALIZATION SECTION *****/
	// no initialization needed for this program.
	
	/***** INTRO SECTION *****/
	cout << "Welcome to the Basal Metabolic Rate calculator.\n" << endl;

	/***** INPUT SECTION *****/
	cout << "Your weight in pounds: ";
	cin >> weight;
	cout << "Your height in inches: ";
	cin >>  height;
	cout << "Your age: ";
	cin >> age;
	cout << "\nEnter your activity level:\n1. Sedentary (not active)\n2. Somewhat active (exercise occationally)\n3. Active (exercision 3-4 times per week)\n4. Highly Active (exercise every day)\nActivity level? "; 
	cin >> activity_level;
	cout << "\n";	

	 
	switch (activity_level)
	{
		case 1 : bmr_activity_increase = 0.2;
			 break;
		case 2 : bmr_activity_increase = 0.3;
			 break;
		case 3 : bmr_activity_increase = 0.4;
			 break;
		case 4 : bmr_activity_increase = 0.5;
			 break;
		default : cout << "Not valid activity level input.\n";
			  bmr_activity_increase = 1.0;
			  break;
	}


	/***** PROCESSING SECTION *****/
	female_bmr_calories = 665 + (4.35 * weight) + (4.7 * height) - (4.7 * age); 
	male_bmr_calories = 66 + (6.23 * weight) + (12.7 * height) - (6.8 * age);	
	female_bmr_calories = (bmr_activity_increase != 1.0) ? female_bmr_calories + (female_bmr_calories * bmr_activity_increase) : female_bmr_calories;
	male_bmr_calories = (bmr_activity_increase != 1.0) ? male_bmr_calories + (male_bmr_calories * bmr_activity_increase) : male_bmr_calories;

	avg_caloric_needs = (female_bmr_calories + male_bmr_calories)/2;
	num_of_daily_chocolate_bars = avg_caloric_needs / chocolate_bar_calories;	
	

	/***** OUTPUT SECTION *****/
	cout << "If you are a woman then to maintain your weight you will need " << female_bmr_calories << " calories" << endl;
	cout << "If you are a man then to maintain your weight you will need " << male_bmr_calories << " calories" << endl;
	cout << "You should be able to consume about " << num_of_daily_chocolate_bars << " chocolate bars per day. " << endl;

	return 0;

}
