/********************************************************************************
* Name: Aakash Tripathi
* Email: tripat67@students.rowan.edu
*********************************************************************************
* Purpose:
*  Program to converts miles to kilometers.
*  This program calculates circumference of circle.
*  Program to converts miles to kilometers, meters, centimeters, and millimeters.
*********************************************************************************/

#include <iostream> 
using namespace std;

const  float PI = 3.14159;

int main()
{
	float miles, kilometer;

	//Display purpose of the program
	cout << " *****************************************" << endl;
	cout << " This program takes in miles to kilometer" << endl;
	cout << " *****************************************\n\n";

	//Get user input
	cout << "Please input the distance in miles: ";
	cin >> miles;

	while (miles < 0) // fixes the issue of negative distance
	{
		cout << "Please input the distance in miles that is greater than or eqaual to 0: ";
		cin >> miles;
	}

	//Compute miles to kilometers
	kilometer = miles * 1.6;

	//Display the kilometers
	cout << "The distance in kilometer is: " << kilometer << "\n\n";

	//___________________________________________________________________________________________________________________________
	float radius, circumference;

	//Display purpose of the program
	cout << " ****************************************************************" << endl;
	cout << " This program takes in radius to compute circumference of circle" << endl;
	cout << " ****************************************************************\n\n";

	//Get user input
	cout << "Please input radius: ";
	cin >> radius;

	while (radius < 0) // fixes the issue of negative radius
	{
		cout << "Please input the radius that is greater than or eqaual to 0: ";
		cin >> radius;
	}

	//Compute circumference to PI*radius*radius
	circumference = 2 * PI*radius;

	//Display the circumference 
	cout << "The circumference is = " << circumference << "\n\n";
	cout << "Program has ended" << endl;

	//___________________________________________________________________________________________________________________________

	float distance, meter, centimeter, millimeter;

	//Display purpose of the program
	cout << " *****************************************************************************" << endl;
	cout << " This program converts given distance in meters, centimeters, and millimeters." << endl;
	cout << " *****************************************************************************\n\n";

	//Get user input
	cout << "Please input distance: ";
	cin >> distance;

	while (distance < 0) // fixes the issue of negative distance
	{
		cout << "Please input the distance in kilometer that is greater than or eqaual to 0: ";
		cin >> distance;
	}

	//Convertion of kilometer to meters, centimeters, and millimeters
	meter = distance * 1000;
	centimeter = distance * 100000;
	millimeter = distance * 1000000;

	//Display the circumference 
	cout << "Meters = " << meter << "\n";
	cout << "Centimeter = " << centimeter << "\n";
	cout << "Millimeter = " << millimeter << "\n\n";
	cout << "Program has ended" << endl;

	//___________________________________________________________________________________________________________________________
	float celsius, fahrenheit;

	//Display purpose of the program
	cout << " ***********************************************************" << endl;
	cout << " This program converts temperature in celsius to fahrenheit" << endl;
	cout << " ***********************************************************\n\n";

	//Get user input
	cout << "Please input temperature in celcius: ";
	cin >> celsius;

	//Converts the temperature
	fahrenheit = (9 / 5) * celsius + 32;

	//Display the temp in f 
	cout << "Fahrenheit = " << fahrenheit << "\n\n";
	cout << "Program has ended" << endl;
	//___________________________________________________________________________________________________________________________
	float ageYears, ageMonths, ageDays, ageHours, ageMins, ageSecs;

	//Display purpose of the program
	cout << " *******************************************************************************" << endl;
	cout << " This program converts age in years to months, days, hours, minutes, and seconds" << endl;
	cout << " *******************************************************************************\n\n";

	//Get user input
	cout << "Enter your age in years: ";
	cin >> ageYears;

	while (ageYears < 0) // fixes the issue of negative distance
	{
		cout << "Please make sure your input is greater than or eqaual to 0: ";
		cin >> ageYears;
	}

	//Convertion
	ageMonths = ageYears * 12;
	ageDays = ageYears * 365.25;
	ageHours = ageYears * 365.25 * 24;
	ageMins = ageYears * 365.25 * 24 * 60;
	ageSecs = ageYears * 365.25 * 24 * 60 * 60;

	//Display the outputs
	cout << "Age in months = " << ageMonths << "\n\n";
	cout << "Age in days = " << ageDays << "\n\n";
	cout << "Age in hours = " << ageHours << "\n\n";
	cout << "Age in minutes = " << ageMins << "\n\n";
	cout << "Age in seconds = " << ageSecs << "\n\n";
	cout << "Program has ended" << endl;
	//___________________________________________________________________________________________________________________________

	//Display purpose of the program
	cout << " ******************************************************" << endl;
	cout << " This program prints my first initial as a block letter" << endl;
	cout << " ******************************************************\n\n";

	//Prints my first initial (A)
	cout << "My first initial, A is displayed below: \n";
	cout << "  *   \n";
	cout << " * *  \n";
	cout << "* * * \n";
	cout << "*   * \n";
	cout << "*   * \n";
	cout << "Program has ended" << endl;
	//___________________________________________________________________________________________________________________________

	system("pause");

	return 0;
}