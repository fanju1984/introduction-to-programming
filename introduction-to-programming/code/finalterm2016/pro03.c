/*
 * pro03.c
 *
 *  Created on: 29 Dec 2016
 *      Author: fanj
 */

#include<stdio.h>

struct Student {
	int id;
	double avg;
};

int main() {
	struct Student list[10000];
	int n;
	scanf("%d", &n);
	int count = 0;
	for (int i = 0; i < n; i ++) {
		scanf("%d", &list[count].id);
		list[count].avg = 0;
		int c_num;
		scanf("%d", &c_num);
		for (int j = 0; j < c_num; j ++) {
			int point;
			scanf("%d", &point);
			list[count].avg += point;
		}
		list[count].avg /= c_num;
		int avg_int = (int)(list[count].avg * 100);
		//printf("debug: %f %d\n", list[count].avg, avg_int);
		list[count].avg = ((float) avg_int) / 100.0;
		if (c_num < 2) {
			continue;
		}
		count ++;
	}

	if (count == 0) printf("NO");
	else {
		for (int i = 0; i < count-1; i ++) {
			for (int j = 0; j < count-1-i; j ++) {
				if ((list[j].avg < list[j+1].avg) ||
						(list[j].avg == list[j+1].avg && list[j].id > list[j+1].id)) {
					struct Student tmp = list[j];
					list[j] = list[j+1];
					list[j+1] = tmp;
				}
			}
		}
		for (int i = 0; i < count; i ++) {
			printf("%d %.2f\n", list[i].id, list[i].avg);
		}
	}


}
