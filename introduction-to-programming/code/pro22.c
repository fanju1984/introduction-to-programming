/*
 * pro22.c
 *
 *  Created on: 19 Oct 2017
 *      Author: fanj
 */

#include<stdio.h>

int main () {
	int n;
	scanf ("%d", &n);
	int sol_num = 0;
	int rooster, hen, chick;
	for (rooster = 0; rooster <= n; rooster ++) {
		for (hen = 0; hen <= n; hen ++) {
			for (chick = 0; chick <=n; chick += 3) {
				if (5 * rooster + 3 * hen + chick / 3 == n &&
						rooster + hen + chick == n) {
					printf ("%d %d %d\n", rooster, hen, chick);
					sol_num ++;
				}
			}
		}
	}
	printf ("%d", sol_num);
}
