/*
 * pro18.c
 *
 *  Created on: 11 Oct 2017
 *      Author: fanj
 */
/*
#include<stdio.h>

int main () {
	int A, B, n;
	int fn, fn1, fn2;
	int count;
	scanf("%d %d %d", &A, &B, &n);

	for (count = 1; count <= n; count ++) {
		if (count == 1 || count == 2) {
			fn = fn1 = fn2 = 1;
		} else {
			fn = (A*fn1 + B*fn2) % 7;
			fn2 = fn1;
			fn1 = fn;
		}
	}
	printf ("%d", fn);
	return 0;
}
*/
