//Implement an algorithm to determine if a string
//has all unique characters. What if you can not use
//addition data structures?

#include <stdlib.h>
#include <stdio.h>


int main(int argc, char *argv[]) {
	if(argc != 2) {
		fprintf(stderr, "%s Usage: %s stringToSearch", argv[0], argv[0]);
	}
	char* string = argv[1];
	int *map = malloc(sizeof(int) * 256);
	int c;
	int unique = 1;
	int i = 0;
	while( (c = string[i++]) != '\0') {
		if(++map[c] > 1) {
			unique = 0;
			break;
		}
	}
	unique ? printf("TRUE") : printf("FALSE");
	free(map);
	exit(0);
}
