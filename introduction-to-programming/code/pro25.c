/*
 * pro25.c
 *
 *  Created on: 19 Oct 2017
 *      Author: fanj
 */

#include<stdio.h>

int main () {
	int n, m;
	int i;
	scanf ("%d %d", &n, &m);
	// Output 1
	double meter = 0.0;
	for (i = 1; i <= n ; i ++) {
		meter += 1.0 / i;
	}
	printf ("%.2lf\n", meter);

	meter = 0.0;
	i = 0;
	do {
		i ++;
		meter += 1.0 / i;
	} while (meter < m);
	printf ("%d", i);
	return 0;
}
