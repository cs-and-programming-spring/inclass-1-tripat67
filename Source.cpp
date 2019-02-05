
/***********************************************
* Name: Aakash Tripathi
* Email: tripat67@students.rowan.edu
***********************************************
* Purpose:
*  Converts miles to kilometers
*  This program calculates circumference of circle
*  
***********************************************/

#include <iostream>

using namespace std; 

const  float PI = 3.14159;

int main()
{
	float miles, kilometer;
	
	//Display purpose of the program
	cout << " ******************************************"<<endl;
	cout << " This program converts miles to kilometer" <<endl;
	cout << " ******************************************\n\n";
	
	//Get user input
	cout << "Please input miles: ";
	cin >> miles;
	
	//Convert miles to kilometer 
	kilometer = miles * 1.6;
	
	//Display the conversion  
	cout << "Kilometer = " << kilometer << "\n\n";
	cout << "Program has ended"<<endl;

	//-----------------------------------------------------------------------------------------------------

	float radius, circumference;

	//Display purpose of the program
	cout << " ******************************************" << endl;
	cout << " This program takes in radius to compute circumference of circle" << endl;
	cout << " ******************************************\n\n";

	//Get user input
	cout << "Please input radius: ";
	cin >> radius;

	//Compute area to 2*PI*radius
	circumference = 2 * PI*radius;

	//Display the area 
	cout << " The area is = " << circumference << "\n\n";
	cout << "Program has ended" << endl;

	//-----------------------------------------------------------------------------------------------------

	float radius, circumference;

	//Display purpose of the program
	cout << " ******************************************" << endl;
	cout << " This program takes in radius to compute circumference of circle" << endl;
	cout << " ******************************************\n\n";

	//Get user input
	cout << "Please input radius: ";
	cin >> radius;

	//Compute area to 2*PI*radius
	circumference = 2 * PI*radius;

	//Display the area 
	cout << " The area is = " << circumference << "\n\n";
	cout << "Program has ended" << endl;
	//-----------------------------------------------------------------------------------------------------
	system("pause");
	
	return 0;
}
/*
0|1|2|3|4|5|6| 
1| | |*|*| | |
2| |*| | |*| |
3|*| | | | |*|
4|*|*|*|*|*|*|
5|*| | | | |*|
6|*| | | | |*|
*/