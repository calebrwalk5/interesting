/* Caleb Walker */
/* Diamond C++ Code */
#include <iostream>
using namespace std;

int r = 10;
int s = 10;
int i = 0;

int main() {
	for(i = 0; i < r; i++) {
		for(int x = 0; x < s; x++) {
			cout << " ";
		} 
		s--;
		int t = 2 * i;
		int t2 = t - 1;
		for(int y = 0; y < t2; y++) {
			cout << "*";
		}
		cout << "\n";
	}
	s = 1;
	int b = r - 1;
	for(i = 0; i < b; i++) {
		for(int a = 0; a < s; a++) {
			cout << " ";
		} 
		s++;
		int b2 = 2 * r;
		int b3 = b2 - i;
		int b4 = b3 - 1;
		for(int c = 0; c < b4; c++) {
			cout << "*";
		}
		cout << "\n";
	}
	return 0;
}
