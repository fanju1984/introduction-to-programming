/*
 * pro21.c
 *
 *  Created on: 19 Oct 2017
 *      Author: fanj
 */

#include<stdio.h>

int main () {
	int n;
	int Ai;
	scanf ("%d", &n);
	for (int i = 0; i < n; i ++) {
		scanf ("%d", &Ai);
		int is_prime = 1;
		if (Ai == 1) is_prime = 0;
		for (int fac = Ai - 1; fac > 1; fac --) {
			if (Ai % fac == 0) {
				is_prime = 0;
				break;
			}
		}
		if (is_prime == 1) printf ("YES");
		else printf ("NO");
		if (i < n - 1) printf (" ");
	}
	return 0;
}
