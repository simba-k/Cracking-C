//reverse C-Style string

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void swap(char* o, char* t) {
	int temp = *o;
	*o = *t;
	*t = temp;
}

int main(int argc, char* argv[]) {
	char *string = argv[1];
	int len = strlen(string);
	int i, j;
	for(i = 0, j = len - 1; i < j; i++, j--) {
		swap(string + i, string + j);
	}
	printf("%s", string);
	exit(0);
}
