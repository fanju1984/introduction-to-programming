/*
 * pro05.c
 *
 *  Created on: 22 Dec 2016
 *      Author: fanj
 */
/*
#include<stdio.h>

int compare(int row1[100], int row2[100],
		int rule_num, int rule[]);

int main() {
	int m, n;
	scanf("%d %d", &m, &n);
	int rule_num;
	int rule[100];
	int matrix[100][100];
	scanf("%d", &rule_num);
	for (int i = 0; i < rule_num; i ++) {
		scanf("%d", &rule[i]);
	}
	for (int i = 0; i < m; i ++) {
		for (int j = 0; j < n; j ++) {
			scanf("%d", &matrix[i][j]);
		}
	}
	for (int i = 0; i < m - 1; i ++) {
		for (int j = 0; j < m - 1 - i; j ++) {
			if (compare(matrix[j], matrix[j+1],
					rule_num, rule) > 0) {
				for (int k = 0; k < n; k ++) {
					int tmp = matrix[j][k];
					matrix[j][k] = matrix[j+1][k];
					matrix[j+1][k] = tmp;
				}
			}
		}
	}
	for (int i = 0; i < m; i ++) {
		for (int j = 0; j < n; j ++) {
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
}

int compare(int row1[100], int row2[100],
		int rule_num, int rule[]) {
	for (int i = 0; i < rule_num; i ++) {
		int col = rule[i]-1; // starting from 0;
		if (row1[col] < row2[col]) return -1;
		else if (row1[col] > row2[col]) return 1;
	}
	if (row1[0] < row2[0]) return -1;
	else return 1;
}

*/
