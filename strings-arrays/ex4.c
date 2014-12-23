//check anagram
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	char *string = argv[1];
	int len = -1;
	while(string[++len])
		;
	int i = 0;
	int j = len - 1;
	int anagram = 1;
	while(i < j) {
		if(string[i++] != string[j--])
			anagram = 0;
	}
	anagram ? printf("ANAGRAM") : printf("NOT");
	exit(0);
}
