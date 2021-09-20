#include <iostream>
using namespace std;

const int SECMIN = 60; // Seconds in a minute
const int SECDAY = 86400; // Seconds in a day
const int SECHR = 3600; // Seconds in an hour
long seconds; // Seconds for the user to input
int days; // Days
int mins; // Minutes
int secs; // Seconds
int hours; // Hours
int r; // Remainder

int main() {
	cout << "Please enter total number of seconds: "; // User prompted for input
	cin >> seconds; // User input 
	cout << "\n"; // Newline
	days = seconds / SECDAY; // Days = input / seconds in a day
	cout << days << " Days, \n";
	r = seconds - (days * SECDAY); // Remainder = input - days * seconds in a day
	hours = r / SECHR; // Hours = remainder / seconds in an hour
	cout << hours << " Hours, \n";
	r = r - (hours * SECHR); // Remainder = old remainder - hours * seconds in an hour
	mins = r / SECMIN; // Minutes = remainder / seconds in a minute
	cout << mins << " Minutes, \n";
	r = r - (mins * SECMIN); // Remainder = old remainder - minutes * seconds in a minute
	secs = r; // Seconds = remainder
	cout << secs << " Seconds. \n";
	return false;
}
