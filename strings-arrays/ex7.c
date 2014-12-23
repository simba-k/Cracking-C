#include <stdio.h>

void print(int m, int n, int mat[m][n]) {
	for(int x = 0; x < m; x++) {
		for(int y = 0; y < n; y++) {
			printf("%d ", mat[x][y]);
		}
		printf("\n");
	}
	printf("\n");
}

void zeroColumn(int mSize, int nSize, int mat[mSize][nSize], int clm) {
	for(int i = 0; i < nSize; i++) {
		mat[clm][i] = 0;
	}
}

void zeroRow(int mSize, int nSize, int mat[mSize][nSize], int row) {
	for(int i = 0; i < mSize; i++) {
		mat[i][row] = 0;
	}
}

void swap(int *x, int *y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}

void clean(int mSize, int nSize, int mat[mSize][nSize]) {
	int clm[mSize];
	int row[nSize];
	int clmSize = mSize;
	int rowSize = nSize;
	for(int i = 0; i < clmSize; i++) {
		clm[i] = i;
	}
	for(int i = 0; i < rowSize; i++) {
		row[i] = i;
	}

	int zclm[mSize];
	int zrow[nSize];
	int zclmSize = 0;
	int zrowSize = 0;

	for(int i = 0; i < clmSize; i++) {
		for(int j = 0; j < rowSize; j++) {
			if(mat[clm[i]][row[j]] == 0) {
				zclm[zclmSize++] = clm[i];
				zrow[zrowSize++] = row[i];
				swap(clm + i, clm - 1 + clmSize--);
				swap(row + i, row - 1 + rowSize--);
			}
		}
	}
	
	for(int i = 0; i < clmSize; i++) {
		zeroColumn(mSize, nSize,  mat, zclm[i]);
	}

	for(int i = 0; i < rowSize; i++) {
		zeroRow(mSize, nSize,  mat, zrow[i]);
	}
}
int main() {
	int test[6][5] = {
		{0, 0, 8, 1, 1},
		{1, 1, 8, 1, 1},
		{8, 8, 8, 0, 8},
		{2, 2, 8, 3, 3},
		{2, 2, 8, 3, 3},
		{2, 2, 0, 0, 3}
	};
	print(5, 6, test);
	clean(5, 6, test);
	print(5, 6, test);
	return 0;
}
