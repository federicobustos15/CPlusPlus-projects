// Name: Federico Bustos
// Date:6/13/2020
// Asg: Programming Challenges # 22 - Angle Calculator
/* Dece: This program will calculate and display the sine, cosine, and tangent of an angle. The user will be prompted
   to input the angle in the form of a radian. */

#include <iostream>
#include <iomanip>      // For fixed, setprecision(), and showpoint
#include <cmath>        // For math functions

using namespace std;

int main ()
{
	double inRadian,      // Declares the radians
	       outSine,       // Declares the sine
	       outCosine,     // Declares the cosine
	       outTangent;    // Declares the tangent
	
	// Asks the user to input the angle in the form of radian(s)
	cout << "Please input the angle in the form of Radian(s). (r = a (PI / 180)" << endl;
	// User inputs the Radians
	cin >> inRadian;
	
	outSine = sin(inRadian);       // Calculates the sine
	
	outCosine = cos(inRadian);     // Calculates the cosine
	
	outTangent = tan(inRadian);    // Calculates the tangent
	
	// Formats the output
	cout << setprecision(4) << fixed << showpoint;
	
	// Displays the sine, cosine, and tangent of the angle
	cout << "\nThe sine of the angle is " << outSine << endl
	     << "The cosine of the angle is " << outCosine << endl
	     << "The tangent of the angle is " << outTangent << endl;
	
	return 0;
}
