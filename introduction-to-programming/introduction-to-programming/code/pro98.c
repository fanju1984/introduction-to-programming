/*
 * pro98.c
 *
 *  Created on: 4 Dec 2016
 *      Author: fanj
 */

#include<stdio.h>

void computeMax(int peach[101][102], int i, int j, int max[101][101], int n);
int main() {
	int peach[101][102]; // number of peaches
	int max[101][101]; // max pickings
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i ++) { // level from 1 to n
		for (int j = 0; j <= i+1; j ++) {
			if (j == 0 || j == i+1) peach[i][j]=0;
			else { // peach from 1 to n
				scanf("%d", &peach[i][j]);
				max[i][j] = -1;
			}
		}
	}

	computeMax(peach, 1, 1, max, n); // compute max at (1,1)
	printf("%d", max[1][1]);
}

void computeMax(int peach[101][102], int i, int j, int max[101][101], int n) {
	if (max[i][j] != -1) return; // already computed
	if (i == n) max[i][j] = peach[i][j]; // lowest level
	else { // upper levels
		computeMax(peach, i+1, j, max, n); // left child
		computeMax(peach, i+1, j+1, max,n); // right child
		int submax = max[i+1][j]>max[i+1][j+1] ? max[i+1][j] : max[i+1][j+1]; // compute max
		max[i][j] = peach[i][j] +submax; // add number of peaches at (i,j)
	}
}

