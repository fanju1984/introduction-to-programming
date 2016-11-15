/*
 * log.c
 *
 *  Created on: 14 Nov 2016
 *      Author: fanj
 */


#include<stdio.h>

int main() {
	int n;
	int on_times[1000];
	int off_times[1000];
	scanf("%d", &n);
	for (int i = 0; i < n; i ++) {
		int on, off;
		scanf("%d %d", &on, &off);
		on_times[i] = on;
		off_times[i] = off;
	}

	for (int i = 0; i < n - 1; i ++) {
		for (int j = 0; j < n - i - 1; j ++) {
			if (on_times[j] > on_times[j + 1]) {
				int tmp = on_times[j];
				on_times[j] = on_times[j + 1];
				on_times[j + 1] = tmp;
				tmp = off_times[j];
				off_times[j] = off_times[j + 1];
				off_times[j + 1] = tmp;
			}
		}
	}
	int time, prev_time = 0;
	int count = 0, max_count = 0;
	for (int i = 0; i < n; i ++) {
		time = on_times[i];
		count ++;
		for (int j = 0; j < i; j ++) {
			if (off_times[j] <= time && off_times[j] > prev_time) count --;
		}
		if (count > max_count) max_count = count;
		prev_time = time;
	}
	printf("%d", max_count);
}
