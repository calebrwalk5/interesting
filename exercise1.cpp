/* Exercise1.cpp */
#include <iostream> // Handles input/output
using namespace std; // Std namespace

const int inFt = 12; // Conversion factor
int heightFt; // height in feet
int heightIn; // height in inches
int inputIn; // input

int main() {
	cout << "Please enter your height in inches: "; // User prompted for input
	cin >> inputIn; // User enters data
	heightFt = inputIn / inFt; // Height in feet is entered inches divided by the conversion factor
	heightIn = inputIn - (heightFt * inFt); // Entered inches minus height in feet times conversion factor
	cout << "You are " << heightFt << " feet, " << heightIn << " inches  tall!\n"; // Output
	return false; // Return boolean 0 to the compiler
}
