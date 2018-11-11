/*
 * plan.c
 *
 *  Created on: 14 Nov 2016
 *      Author: fanj
 */

#include<stdio.h>

int main() {
	int prov [8] = {125, 45, 90, 60,
			110, 140, 70, 100}; // provision
	int dema [3] = {0, 0, 0}; // demands
	scanf("%d %d %d", &dema[0], &dema[1], &dema[2]);

	int sol[1200];
	int len = 0;
	int min = -1;
	for (int i = 0; i < 8; i ++) {
		if (dema[0] > prov[i]) continue;
		for (int j = 0; j < 8; j ++) {
			if (j == i || dema[1] > prov[j]) continue; // not allowed
			for (int k = 0; k < 8; k ++) {
				if (k == i || k == j || dema[2] > prov[k]) continue; // not allowed
				int sum = prov[i] + prov[j] + prov[k];
				if (min == -1 || sum < min) {
					len = 0; // reset
					sol[len++] = i;
					sol[len++] = j;
					sol[len++] = k;
					min = sum;
				} else if (sum == min) {
					sol[len++] = i;
					sol[len++] = j;
					sol[len++] = k;
				}
			}
		}
	}
	if (len == 0) printf("%d", -1);
	else {
		for (int i = 0; i < len; i += 3) {
			printf("%d %d %d\n", sol[i] + 1, sol[i + 1] + 1, sol[i + 2] + 1);
		}
	}
	return 0;
}
