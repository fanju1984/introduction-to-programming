/*
 * pro06.c
 *
 *  Created on: 22 Dec 2016
 *      Author: fanj
 */

#include<stdio.h>

int select (int step, int series[], int n, int occupied[]);

int sum = 0;
int main() {
	int n;
	scanf("%d %d", &n, &sum);
	int series[10];
	for (int i = 0; i < 10; i ++) series[i] = 0;
	int occupied[11];
	for (int i = 1; i <= n; i ++) occupied[i]=0;
	select (1, series, n, occupied);
}

int select(int step, int series[], int n,
		int occupied[]) {
	if (step == n+1) {
		int new_series[10];
		for (int i = 0; i < n; i ++) new_series[i] = series[i];
		for (int row = 0; row < n; row ++) {
			for (int i = 0; i < n - row - 1; i ++) {
				new_series[i] = new_series[i] + new_series[i+1];
			}
		}
		if (new_series[0] == sum) {
			for (int i = 0; i < step - 1; i ++) {
				printf("%d ", series[i]);
			}
			printf("\n");
			return 1; // find a solution
		} else return 0;
	}
	for (int num = 1; num <= n; num++) {
		if (occupied[num] == 1) continue;
		occupied[num] = 1;
		series[step - 1] = num;
		int flag = select(step + 1, series, n, occupied);
		occupied[num] = 0;
		if (flag == 1) return 1;
	}
	return 0;
}

