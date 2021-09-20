#include <iostream>
using namespace std;

const int MY = 12;
const int WY = 52;
int eY;
int eM;
int cM;
int cW;
int cD;
int cH;
int cS;

int main() {
	cout << "Please enter your age in years and months: ";
	cin >> eY >> eM;
	cM = (eY * MY) + eM;
	cW = (eY * WY) + (MY * (eM / MY));
	cout << "Months: " << cM << endl << "Weeks: " << cW << endl;
	return false;
}
