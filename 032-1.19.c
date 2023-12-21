#include <stdio.h>

int main(int argc, char* argv) {
	int c;
	while( (c = getchar()) != EOF) {
		c++; // C++ reference!!!
		if (c == '\n') {
			putchar(c);
		}	
	}
	return 0;
}
