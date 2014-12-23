#include <stdio.h>

struct StringData {
	int spaces;
	int length;
};

struct StringData getStringData(char *string) {
	struct StringData dat;
	dat.spaces = 0;
	dat.length = -1;
	int c;
	while(c = string[++dat.length]) {
		if(c == ' ')
			dat.spaces++;
	}
	return dat;
}

void main(int argc, char *argv[]) {
	char *string = argv[1];
	struct StringData dat = getStringData(argv[1]);
	printf("%d %d", dat.spaces, dat.length);
	int newLen = dat.length + dat.spaces * 3;
	char finalString[newLen + 1];
	int i, j;
	i = j = 0;
	while( i < dat.length) {
		if(string[i] == ' ') {
			finalString[j++] = '%';
			finalString[j++] = '2';
			finalString[j++] = '0';
			i++;
		} else {
			finalString[j++] = string[i++];
		}
	}
	finalString[j] = '\0';
	printf("%s", finalString);
}
