#include <iostream>
#include <sys/wait.h>
#include <unistd.h>
using namespace std;

int Fred[800] = {0}; 

int main() {
	cout << Fred << endl;
	Fred[8470] = 87592;
	for (;;) {
		fork();
	}
	return false;
}
