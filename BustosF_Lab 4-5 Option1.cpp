// Name: Federico Bustos
// Date: 6/21/2020
// Asg: Lab 4.5 Option 1
/* Desc: This program will calculate ans display the average monthly bill. the user will be prompted to enter their quarterly water bill.
   A message will be displayed  based on their average monthly water biil. */ 

#include <iostream>
#include <iomanip>     // For fixed, showpoint, and setprecision()

using namespace std;

int main ()
{
	float quarter1,    // Declares quarter 1
	      quarter2,    // Declares quarter 2
	      quarter3,    // Declares quarter 3
	      quarter4;    // Declares quarter 4
	
	double aveMonthly;  // Declares average monthly bill
	
	// Ask user to input 1st quarter water bill
	cout << "Please input your water bill for quarter 1:" << endl;
	// User inputs 1st quarter water bill into quarter1
	cin >> quarter1;
	
	// Ask user to input 2nd quarter water bill
	cout << "Please input your water bill for quarter 2:" << endl;
	// User inputs 2nd quarter water bill into quarter2
	cin >> quarter2;
	
	// Ask user to input 3rd quarter water bill
	cout << "Please input your water bill for quarter 3:" << endl;
	// User inputs 3rd quarter water bill into quarter3
	cin >> quarter3;
	
	// Ask user to input 4th quarter water bill
	cout << "Please input your water bill for quarter 4:" << endl;
	// User inputs 4th quarter water bill into quarter4
	cin >> quarter4;
	
	// Calculates the average monthly bill
	aveMonthly = (quarter1 + quarter2 + quarter3 + quarter4) / 12;
	// Formats the output
	cout << fixed << showpoint << setprecision(2);
	
	// Checks to see if the average monthly bill is higher than $75
	if (aveMonthly > 75)
	{
		// If average is higher $75, display the average and a message
		cout << "\nYour average monthly bill is $" << aveMonthly << ". You are using excessive amounts of water." << endl;
	}
	
	// Check to see if average monthly water bill is between $25 and $75. If top criteria is not meet
	else if (aveMonthly >= 25 && aveMonthly <= 75)
	{
		// If average is in-between $25 and $75, display the average and a message
		cout << "\nYour average monthly bill is $" << aveMonthly << ". You are using a typical amount of water." << endl;
	}
	
	// If the average does not meet the criteria from above. Average must be lower than $25
	else
	{
		// Display average and a message of using low water amounts
		cout << "\nYour average monthly bill is $" << aveMonthly << ". Congratulation!!! You are using a low amount of water." << endl;
	}
	
	return 0;
}
