// Name: Federico Bustos
// Date: 6/21/2020
// Asg: Programming Challenges #23 Geometry Calculator
/* Desc: This program will use a switch statement to determine the item selected from the menu. The user will 
   be asked to select from the menu provided. Based on the selection one the following will occur:
   calculate the area of a circle, rectangle, triangle or quit */

#include <iostream>
#include <iomanip>    // For fixed, showpoint, and setprecision()
#include <cmath>      // For math functions

using namespace std;

// Constant
const double PI = 3.14159;    // Declares and defines PI

// Constants for menu choices
const int CIRCLE_CHOICE = 1,    // Declares and defines for the choice of the area of the circle
          RECTANGLE_CHOICE = 2, // Declares and defines for the choice of the area of the rectangle
          TRIANGLE_CHOICE = 3,  // Declares and defines for the choice of the area of the triangle
          QUIT_CHOICE = 4;      // Declares and defines for the choice to quit

int main ()
{
	int choice;     //To hold the user choice
	
	// Dispaly the menu
	cout << "Geometry Calculator\n\n"
	     << "\t1.  Calculate the Area of a Circle.\n"
	     << "\t2.  Calculate the Area of a Rectangle.\n"
	     << "\t3.  Calculate the Area of a Triangle.\n"
	     << "\t4.  Quit.\n\n"
	     << "Enter your choice (1 - 4) :" << endl;
	// User inputs their choice and is stored in choice
	cin >> choice;
	
	// Formats the output
	cout << fixed << showpoint << setprecision(2);
	
	// Respond to the user's menu selection
	switch (choice)
	{
		// Selection was for the area of a circle
		case CIRCLE_CHOICE:
			double radiusC,   // Declares the radius of the circle
			       areaC;     // Declares the area of the cicle
			// Ask the user to input the radius of the circle
			cout << "\nPlease input the radius of the circle:" << endl;
			// User inputs the radius into radiusC
			cin >> radiusC;
			// Input Validation to ensure the user inputs a radius grater than 0
			if (radiusC > 0)
			{
				// Calculates the area of the circle. A = PI * pow(R, 2)
				areaC = PI * pow(radiusC, 2);
				// Displays the area of the circle
				cout << "\nThe area of the circle is: " << areaC << endl;
			}
			// Input Validation to ensure user inputs a radius grater than 0
			else
			{
				// Warn the user the value for the radius is invalid
				cout << "\nThe value inputed for the radius is invalid.\n"
				     << "Run the program again and input a value greater than 0.\n";
			}
			break;
		
		case RECTANGLE_CHOICE:
			float lengthRec,    // Declares the length
			      widthRec,     // Declares the width
			      areaRec;      // Declares the area
			//Ask the user to input the length of the rectangle
			cout << "\nPlease input the length of the rectangle:" << endl;
			//User inputs length of the rectangle into lengthRec
			cin >> lengthRec;
			//Ask the user to input the width of the rectangle
			cout << "Please input the width of the rectangle:" << endl;
			//User inputs width of the rectangle into widthRec
			cin >> widthRec;
			// Input Validation to ensure user inputs the length and width that is grater than 0
			if (lengthRec > 0 && widthRec > 0)
			{
				// Calculate the area of the rectangle. A = L * W
				areaRec = lengthRec * widthRec;
				// Display the area of the rectangle
				cout << "\nThe area of the rectangle is: " << areaRec << endl;
			}
			// Input Validation to ensure user inputs the length and width that is grater than 0
			else
			{
				// Warn the user the value for the length and width is invalid
				cout << "\nThe value inputed for the length and/or width is invalid.\n"
				     << "Run the program again and input a value greater than 0.\n";
			}
			break;
			
		case TRIANGLE_CHOICE:
			float baseTriangle,    // Declares the base of the triangle
			      heightTriangle,  // Declares the height of the triangle
			      areaTriangle;    // Declares the area of the triangle
			//Ask the user to input the base of the triangle
			cout << "\nPlease input the base of the triangle:" << endl;
			//User inputs base of the triangle into baseTriangle
			cin >> baseTriangle;
			//Ask the user to input the height of the triangle
			cout << "Please input the height of the triangle:" << endl;
			//User inputs height of the triangle into heightTriangle
			cin >> heightTriangle;
			// Input Validation to ensure user inputs the length and width that is grater than 0
			if (baseTriangle > 0 && heightTriangle > 0)
			{
				// Calculate the area of the triangle. A = B * H * .5
				areaTriangle = baseTriangle * heightTriangle * .5;
				// Display the area of the triangle
				cout << "\nThe area of the triangle is: " << areaTriangle << endl;
			}
			// Input Validation to ensure user inputs the length and width that is grater than 0
			else
			{
				// Warn the user the value for the base and/or height is invalid
				cout << "\nThe value inputed for the base and/or height is invalid.\n"
				     << "Run the program again and input a value greater than 0.\n";
			}
			break;
			
		// Selection was to end the program
		case QUIT_CHOICE:
			cout << "\nProgram ending.\n";
			break;
		
		//  Input Validation to ensure the user inputs a value in-between 1 - 4 
		default:
			cout << "\nThe valid choices are 1 through 4.\n"
			     << "Run the program again and select one of those choices.\n";
			
			
	}
	
	
	return 0;
}
