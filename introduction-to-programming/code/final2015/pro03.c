/*
 * pro03.c
 *
 *  Created on: 22 Dec 2016
 *      Author: fanj
 */
/*
#include<stdio.h>

int main() {
	int m, n;
	int matrix[102][102];
	scanf("%d %d", &m, &n);
	for (int i = 0; i <= m+1; i ++) {
		// i = 1...m; j = 1...n
		for (int j = 0; j <= n+1; j ++) {
			if (i == 0 || j == 0 ||
					i == m+1 || j == n+1) {
				matrix[i][j] = 0;
			} else {
				scanf("%d", &matrix[i][j]);
			}
		}
	}
	int max = -1; // initial max
	int max_cell[20000];
	int max_index = 0;
	for (int i = 1; i <= m; i ++) {
		for (int j = 1; j <= n; j ++) {
			int sum = matrix[i][j] +
					matrix[i-1][j] + matrix[i+1][j] +
					matrix[i][j-1] + matrix[i][j+1];
			if (sum >= max) {
				if (sum > max) {
					max_index = 0;
					max = sum;
				}
				max_cell[max_index++] = i;
				max_cell[max_index++] = j;
			}
		}
	}
	printf("%d %d\n", max, max_index / 2);
	for (int i = 0; i < max_index; i += 2) {
		printf("%d %d\n", max_cell[i]-1, max_cell[i+1]-1);
	}
	return 0;
}
*/
