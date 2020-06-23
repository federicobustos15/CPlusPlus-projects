// Name: Federico Bustos
// Date: 6/21/2020
// Asg: Programming Challenges #12 Software Sales
/* Desc:This program will calculate and display the total cost  with discount. User will be asked to input 
   the number of units sold. A discount will be applied based on the number of units sold. */

#include <iostream>
#include <iomanip>           // For fixed, showpoint, and setprecision()

using namespace std;

// Constant
const int UNIT_PRICE = 99;   // Declares and define the price per unit

int main ()
{
	int numberUnits;           // Declares the number of units.
	double totalCost;          // Declares total cost
	double discountSaved;      // Declares the discount saved
	
	//Ask user to input number of units sold
	cout << "Please input the number of units sold:" << endl;
	// User inputs the number of units sold into numberUnits
	cin >> numberUnits;
	// Formats output
	cout << fixed << showpoint << setprecision(2);
	
	// Input validation to enure that the number of unit is greater than 0
	if (numberUnits > 0)
	{
		// Check to see if number of units is in-between 10 an 19. There is a 20% discount 
		if (numberUnits >= 10 && numberUnits <= 19)
		{
			// Calculates the total cost without the discount
			totalCost = numberUnits * UNIT_PRICE;
			// Displays the total cost without the discount
			cout << "\nTotal cost without the discount is $" << totalCost << endl;
			
			// Calculates the total cost with the discount
			discountSaved = (totalCost * .2);
			totalCost -= discountSaved;
			
			// Displays the money saved and the total cost with the discount
			cout << "You saved $" << discountSaved << endl
			     << "Total cost with discount 20% is $" << totalCost << endl;
		}
		
		// Checks to see if number of units is in-between 20 an 49, if top criteria is not met. There is a 30% discount 
		else if (numberUnits >= 20 && numberUnits <= 49)
		{
			// Calculates the total cost without the discount
			totalCost = numberUnits * UNIT_PRICE;
			// Displays the total cost without the discount
			cout << "\nTotal cost without the discount is $" << totalCost << endl;
			
			// Calculates the total cost with the discount
			discountSaved = (totalCost * .3);
			totalCost -= discountSaved;
			
			// Displays the money saved and the total cost with the discount
			cout << "You saved $" << discountSaved << endl
			     << "Total cost with discount 30% is $" << totalCost << endl;
		}
		
		// Checks to see if number of units is in-between 50 an 99, if top criteria is not met. There is a 40% discount 
		else if (numberUnits >= 50 && numberUnits <= 99)
		{
			// Calculates the total cost without the discount
			totalCost = numberUnits * UNIT_PRICE;
			// Displays the total cost without the discount
			cout << "\nTotal cost without the discount is $" << totalCost << endl;
			
			// Calculates the total cost with the discount
			discountSaved = (totalCost * .4);
			totalCost -= discountSaved;
			
			// Displays the money saved and the total cost with the discount
			cout << "You saved $" << discountSaved << endl
			     << "Total cost with discount 40% is $" << totalCost << endl;
		}
		
		// Checks to see if number of units is greater than or equal to 100, if top criteria is not met. There is a 50% discount 
		else if (numberUnits >= 100)
		{
			// Calculates the total cost without the discount
			totalCost = numberUnits * UNIT_PRICE;
			// Displays the total cost without the discount
			cout << "\nTotal cost without the discount is $" << totalCost << endl;
			
			// Calculates the total cost with the discount
			discountSaved = (totalCost * .5);
			totalCost -= discountSaved;
			
			// Displays the money saved and the total cost with the discount
			cout << "You saved $" << discountSaved << endl
			     << "Total cost with discount 50% is $" << totalCost << endl;
		}
		
		// If top criteria is not meet the number of units must be less than 10. There is no discount
		else
		{
			// Calculates the total cost
			totalCost = numberUnits * UNIT_PRICE;
			// Displays the total cost without the discount
			cout << "\nTotal cost is $" << totalCost << " There is no discount" << endl;
		}
	}
	
	// Input validation to enure that the number of unit is greater than 0
	else
	{
		// Tell the user the number of units inputed is invalid
		cout << "The number inputed is invalid. Run the program again and enter a value greater than 0" << endl;
	}
	
	return 0;
}
