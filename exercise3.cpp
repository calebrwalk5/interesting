#include <iostream>
using namespace std;

const int MY = 12;
const int WY = 52;
const int DY= 365.25;
const int MD = 1440;
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
	cD = (eY * DY) + (DY * (WY / float(eM)));
	cM = cD * MD;
	cH = cM / 60;
	cout << "Months: " << cM << endl << "Weeks: " << cW << endl << "Days: " << cD << endl << "Hours: " << cH << endl << "Minutes: " << cM << endl;
	return false;
}
