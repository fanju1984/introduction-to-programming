/*
 * pro69.c
 *
 *  Created on: 4 Dec 2016
 *      Author: fanj
 */

#include<stdio.h>

void sort(int ary[], int n);
void perm(int ary[], int step, int n, int used[], int choices[]);

static int MAX_N = 12;
int main() {
	int n;
	int ary[MAX_N];
	scanf("%d", &n);
	for (int i = 0; i < n; i ++) {
		scanf("%d", &ary[i]);
	}
	sort(ary, n);
	int used[MAX_N], choices[MAX_N];
	for (int i = 0; i < n; i ++) used[i] = 0;
	perm(ary, 1, n, used, choices);
	return 0;
}

void sort(int ary[], int n) {
	for (int i = 0; i < n - 1; i ++) {
		for (int j = 0; j < n - 1 - i; j ++) {
			if (ary[j] > ary[j + 1]) {
				int tmp = ary[j];
				ary[j] = ary[j + 1];
				ary[j + 1] = tmp;
			}
		}
	}
}

void perm (int ary[], int step, int n,
		int used[], int choices[]) {
	if (step > n) { // found a solution
		for (int i = 0; i < n; i ++) {
			printf("%d ", ary[choices[i]]);
		}
		printf("\n");
	}
	for (int i = 0; i < n; i ++) { // choices: ary[0] - ary[n-1]
		if (used[i] == 1) continue; // already used
		used[i] = 1;
		choices[step - 1] = i;
		perm(ary, step + 1, n, used, choices);
		used[i] = 0;
	}
}
