/*
 * pro24.c
 *
 *  Created on: 19 Oct 2017
 *      Author: fanj
 */

#include<stdio.h>

int main () {
	int M, N;
	scanf ("%d %d", &M, &N);
	if (M >= 7 && M <= 9) {
		if (N >= 20) printf ("10%%");
		else printf ("5%%");
	} else if ((M >= 1 && M <= 6)
			|| (M >= 10 && M <= 12)) {
		if (N >= 20) printf ("20%%");
		else printf ("10%%");
	}
	return 0;
}
