
/***********************************************
* Name: Aakash Tripathi
* Email: tripat67@students.rowan.edu
***********************************************
* Purpose:
*  This program calculates area of circle
***********************************************/

#include <iostream>

using namespace std; 

const  float PI = 3.14159;

int main()
{

	float radius, circumference;
	
	//Display purpose of the program
	cout << " ******************************************"<<endl;
	cout << " This program takes in radius to compute area of circle" <<endl;
	cout << " ******************************************\n\n";
	
	//Get user input
	cout << "Please input radius: ";
	cin >> radius;
	
	//Compute area to PI*radius*radius
	circumference = 2*PI*radius;
	
	//Display the area 
	cout << " The area is = " << circumference << "\n\n";
	cout << "Program has ended"<<endl;

	system("pause");
	
	return 0;
}