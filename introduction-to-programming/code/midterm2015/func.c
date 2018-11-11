/*
 * func.c
 *
 *  Created on: 14 Nov 2016
 *      Author: fanj
 */
#include<stdio.h>
#include<math.h>

double func (int x);

int main() {
	int x;
	scanf("%d", &x);
	double y = func (x);
	int yint = (int) y;
	if (y - (float)yint == 0) printf ("%d", yint);
	else printf("%.4f", y);
}

double func (int x) {
	double y;
	if (x <= 0 || x > 100) {
		y = x * x + 5;
	} else {
		y = 2 / (2 + (double) x) + sqrt(fabs((float)x - 16));
	}
	return y;
}
