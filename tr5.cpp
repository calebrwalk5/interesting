/* Caleb Walker */
/* Diamond C++ Code */
#include <iostream>
using namespace std;

int r = 10; /* Rows */
int s = 10; /* Spaces */
int i = 0; /* Incrementer */

int main() {
	for(i = 0; i < r; i++) { /* 0 to 10 */
		for(int x = 0; x < s; x++) {
			cout << " ";
		} 
		s--; /* Decrement the number of spaces */
		int t = 2 * i; /* t is two times incrementer */
		int t2 = t - 1; /* t2 is two times incrementer minus one */
		for(int y = 0; y < t2; y++) { 
			cout << "*";
		}
		cout << "\n";
	}
	s = 1; 
	int b = r - 1; /* b is rows (10) minus one */
	for(i = 0; i < b; i++) { /* 0 to 9 */
		for(int a = 0; a < s; a++) {
			cout << " ";
		} 
		s++; /* increment s */
		int b2 = 2 * (r - i); /* b2 is twice rows minus incrementer */
		for(int c = 0; c < (b2 - 1); c++) {
			cout << "*";
		}
		cout << "\n";
	}
	return false;
}