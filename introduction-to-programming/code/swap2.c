/*
 * swap.c
 *
 *  Created on: 30 Oct 2017
 *      Author: fanj
 */

#include<stdio.h>

void swap (int x1, int x2);
int changea0 ();
void mutatea1 (int a[]);
int main () {
	int a[2];
	a[0] = 10;
	a[1] = 100;
	a[0] = changea0();
	mutatea1(a);
	printf ("%d, %d\n", a[0], a[1]);
	swap (a[0],a[1]);
	printf ("%d, %d\n", a[0], a[1]);
	return 0;
}

void swap (int x1, int x2) {
	int tmp = x1;
	x1 = x2;
	x2 = tmp;
}

int changea0 () {
	int a = 15;
	a = a * a;
	return a;
}

void mutatea1 (int a[]) {
	int x = 20;
	x = x * x;
	a[1] = x;
}

