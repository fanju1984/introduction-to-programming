/*
 * pro16.c
 *
 *  Created on: 12 Oct 2017
 *      Author: fanj
 */
/*
#include<stdio.h>

int main () {
	int n;
	int h,l, tmp;
	char c;
	float value, high, low, avg=0.0;
	int h_count = 0, l_count = 0;
	scanf ("%d", &n);
	scanf ("%d%c", &h, &c);
	if (c == 'C') high = h * 1.8 + 32;
	else high = h;
	scanf ("%d%c", &l, &c);
	if (c == 'C') low = l * 1.8 + 32;
	else low = l;

	for (int i = 0; i < n; i ++) {
		scanf ("%d%c", &tmp, &c);
		if (c == 'C') value = tmp * 1.8 + 32;
		else value = tmp;
		avg += value;
		if (value >= high) h_count ++;
		else if (value <= low) l_count ++;
	}
	avg /= n;
	printf ("%.3fF\n", avg);
	printf ("%d %d", h_count, l_count);
	return 0;
}
*/
