#include <stdio.h>

int main() {
	int test, i;
	char name[] = "file.txt";
	char newname[] = "new_name.txt";
	test = rename(name, newname);
	if(test == 0) {
		printf("file changed\n");
	} else {
		printf("failed.\n");
	}
	return 0;
}
