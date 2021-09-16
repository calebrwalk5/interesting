#include <stdio.h>

const char *letters[35] = {"t","h","e","q","u","i","c","k","b","r","o","w","n","f","o","x","j","u","m","p","s","o","v","e","r","t","h","e","l","a","z","y","d","o","g"};

int main() {
	char *output;
	for (int i = 0; i < 10; i++) {
		int n =  rand()%35;
		printf("%d", i);
		printf("%s", letters[n]);
	}
	printf("\n");
	return 0;
}

