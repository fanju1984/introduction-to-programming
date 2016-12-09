/*
 * sequence.c
 *
 *  Created on: 14 Nov 2016
 *      Author: fanj
 */

#include<stdio.h>

int main () {
	int start, end;
	scanf("%d %d", &start, &end);
	int sum = 0;
	for (int i = start; i <= end; i ++) {
		if (((i-1) / 2) % 2 == 0) sum += i;
		else sum -= i;
	}
	printf("%d\n", sum);
	return 0;
}
