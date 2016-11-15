/*
 * pi.c
 *
 *  Created on: 14 Nov 2016
 *      Author: fanj
 */


#include<stdio.h>
#include<math.h>

int main() {
	int e;
	scanf("%d", &e);
	double error = pow(10, -e);
	double inc = 1;
	double pi, prev = 0;
	double sum = 0;
	int n = 1;
	for (; inc >= error; n ++) {
		sum += 1 / ((double) n * (double) n);
		pi = sqrt(6 * sum);
		inc = fabs(pi - prev);
		prev = pi;
	}
	printf ("%.3lf\n%d", pi, n - 1);
}
