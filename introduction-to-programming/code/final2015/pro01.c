/*
 * pro01.c
 *
 *  Created on: 22 Dec 2016
 *      Author: fanj
 */

#include<stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int max, min, sum;
	for (int i = 0; i < n; i ++) {
		int time;
		scanf("%d", &time);
		if (i == 0) {
			max = min = sum = time;
		} else {
			if (time > max) max = time;
			if (time < min) min = time;
			sum += time;
		}
	}
	float avg = ((float) sum) / n;
	int avg_int = (int) (avg + 0.5);
	printf("%d %d %d", max, min, avg_int);

}
