/*
 * pro86.c
 *
 *  Created on: 7 Dec 2016
 *      Author: fanj
 */

#include<stdio.h>

const int MAX_R = 50;
const int MAX_C = 50;
const int MAX_H = 10000;

void computeMax(int i, int j,
		int heights[][MAX_C+2], int max[][MAX_C+1]);

int main() {
	int heights[MAX_R+2][MAX_C+2]; // storing heights
	int max[MAX_R+1][MAX_C+1]; // storing max-trace
	int row, col;
	scanf("%d %d", &row, &col);
	for (int i = 0; i < row+2; i ++) {
		for (int j = 0; j < col+2; j ++) {
			if (i == 0 || j == 0 ||
					i == row+1 || j == col+1) heights[i][j] = MAX_H+1;
			else {
				scanf("%d", &heights[i][j]);
				max[i][j] = -1;
			}
		}
	}

	int max_trace = 0;
	for (int i = 1; i < row + 1; i ++) {
		for (int j = 1; j < col + 1; j ++) {
			computeMax(i, j, heights, max);
			if (max[i][j] >= max_trace) {
				max_trace = max[i][j];
			}
		}
	}

	printf("%d", max_trace);

	return 0;
}

void computeMax(int i, int j,
		int heights[][MAX_C+2], int max[][MAX_C+1]) {
	if (max[i][j] != -1) return;
	int offsets[2] = {-1, 1};
	int max_trace = 0;

	for (int p = 0; p < 2; p ++) {
		if (heights[i][j+offsets[p]] >= heights[i][j]) continue;
		computeMax(i, j+offsets[p],heights, max);
		if (max[i][j+offsets[p]] > max_trace) {
			max_trace = max[i][j+offsets[p]];
		}
	}

	for (int p = 0; p < 2; p ++) {
		if (heights[i+offsets[p]][j] >= heights[i][j]) continue;
		computeMax(i+offsets[p], j,heights, max);
		if (max[i+offsets[p]][j] > max_trace) {
			max_trace = max[i+offsets[p]][j];
		}
	}
	max[i][j] = max_trace + 1;
}
