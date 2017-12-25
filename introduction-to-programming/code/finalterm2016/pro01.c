/*
 * pro01.c
 *
 *  Created on: 29 Dec 2016
 *      Author: fanj
 */

#include<stdio.h>

int main() {
	int d, h;
	scanf("%d %d", &d, &h);
	if (h == 10) printf("%d\n", d);
	else {
		char results[200];
		for (int i = 0; i < 200; i ++) results[i]='\0';
		int index = 0;
		while (d > 0) {
			int digit = d % h;
			if (digit < 10) results[index] = '0' + digit;
			else if (digit < 16) results[index] = 'A' + digit - 10;
			d /= h;
			index ++;
		}
		for (int i = index-1; i >= 0; i --) {
			printf("%c", results[i]);
		}
		printf("\n");
	}
}
