#include <stdio.h>

void printImage(int n, int img[n][n]) {
	for(int x = 0; x < n; x++) {
		for(int y = 0; y < n; y++) {
			printf("%d ", img[x][y]);
		}
		printf("\n");
	}
	printf("\n");
}

void rotate(int n, int img[n][n]) {
	int fhalf = n/2;
	int chalf = n/2 + n%2;
	for(int x = 0; x < fhalf; x++) {
		for(int y = 0; y < fhalf; y++) {
			int tl = img[x][y];
			int tr = img[x + chalf][y];
			int bl = img[x][y + chalf];
			int br = img[x + chalf][y +chalf];
			img[x][y] = tr;
			img[x + chalf][y] = br;
			img[x][y + chalf] = tl;
			img[x + chalf][y + chalf] = bl;
		}
	}
}

int main() {
	int test[5][5] = {
		{0, 0, 8, 1, 1},
		{0, 0, 8, 1, 1},
		{8, 8, 8, 8, 8},
		{2, 2, 8, 3, 3},
		{2, 2, 8, 3, 3}
	};
	printImage(5, test);
	rotate(5, test);
	printImage(5, test);
	return 0;
}
