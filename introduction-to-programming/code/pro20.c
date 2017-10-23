/*
 * pro20.c
 *
 *  Created on: 19 Oct 2017
 *      Author: fanj
 */

#include<stdio.h>

double func (double a, double b, double c, double d,
		double x) {
	return a * x * x * x + b * x * x + c * x + d;
}
int main () {
	double a, b, c, d;
	int sol_num = 0;
	scanf ("%lf %lf %lf %lf", &a, &b, &c, &d);
	for (int i = -100; i < 100; i ++) {
		if (sol_num == 3) break;
		double f1 = func (a,b,c,d, (double)i);
		if (f1 < 0.00001 && f1 > -0.00001) {
			printf ("%.2lf ", (double)i);
			sol_num ++;
			continue;
		}
		double f2 = func (a,b,c,d, (double)(i+1));
		if (f2 < 0.00001 && f2 > -0.00001) {
			printf ("%.2lf ", (double)(i+1));
			sol_num ++;
			i ++;
			continue;
		}
		if (f1 * f2 < 0) { // has_solution
			for (double sol = i; sol < i + 1; sol += 0.001) {
				double f = func (a,b,c,d,sol);
				if (f < 0.00001 && f > -0.00001) {
					printf ("%.2lf ", sol);
					sol_num ++;
				}
			}
		}
	}
	return 0;
}
