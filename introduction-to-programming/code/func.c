/*
 * func.c
 *
 *  Created on: 14 Nov 2016
 *      Author: fanj
 */
#include<stdio.h>
#include<math.h>

int main() {
	int x;
	float y;
	scanf("%d", &x);
	if (x <= 0 || x > 100) {
		y = x * x + 5;
	} else {
		y = 2 / (2 + (float) x) + sqrt(fabs((float)x - 16));
	}
	int yint = (int) y;
	if (y - (float)yint == 0) printf ("%d", yint);
	else printf("%.4f", y);
}
