/*
 * zeno.c -- series sum
 *
 *  Created on: 17 Oct 2016
 *      Author: fanj
 */

#include <stdio.h>
int main(void) {
	int t_ct;
	double time, x;
	int limit;
	printf ("%8d\n", 8);
	printf ("%7d%d\n", 8,8);
	printf("Enter the number of terms you want: ");
	scanf("%d", &limit);
	for (time = 0, x = 1, t_ct = 1; t_ct <= limit; t_ct++, x *= 2.0) {
		time += 1.0 / x;
		printf("time = %f when terms = %d.\n", time, t_ct);
	}
	return 0;
}
