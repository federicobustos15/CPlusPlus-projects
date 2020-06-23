// Name: Federico Bustos
// Date: 6/13/2020
// Asg: Programming Challenges # 17 - Math Tutor
// Dece: This program will add two random numbers. But will pause before revealing the answer.

#include <iostream>
#include <cstdlib>     // For rand and srand
#include <ctime>       // For the time function
#include <iomanip>     // For For setw()

using namespace std;

// Global Constants
const int MIN = 10,    // Declares and defines the minimum value
          MAX = 500;   // Declares and defines the maximum value

int main ()
{
	// Variables
	int firstValue,   // Declares the first value
	    secValue;     // Declares the second value
	
	// Get the system time
	unsigned seed = time(0);
	
	// Seed the number generator
	srand(seed);
	
	// Generates the two random numbers
	firstValue = MIN + (rand() % MAX);
	secValue = MIN + (rand() % MAX);
	
	// Display the addition problem
	cout << setw(5) << firstValue << endl
	     << "+" << setw(4) << secValue << endl
	     << "-----\n\n";
	
	// Asks to press Enter to reveal the anser
	cout << "Press Enter to reveal the answer . . .\n";
	// Wait for Enter to be pressed
	cin.get();
	
	// Calculate the sum of the two random numbers
	int sumValue = firstValue + secValue;
	
	// Display the addition problem with the answer
	cout << setw(5) << firstValue << endl
	     << "+" << setw(4) << secValue << endl
	     << "-----\n"
	     << setw(5) << sumValue << endl;
	
	return 0;
}
