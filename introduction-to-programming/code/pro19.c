/*
 * pro19.c
 *
 *  Created on: 19 Oct 2017
 *      Author: fanj
 */

#include <stdio.h>
int main() {
	int n, g, i;    //n>=0&&n<=8
	char thisman, winner;
	int sum;
	scanf("%d", &n);
	g = 0;
	for (i = 0; i < 8; i++) {
		thisman = 'A' + i;
		sum = (thisman == 'H' || thisman == 'F') + (thisman == 'B')
				+ (thisman == 'G') + (thisman != 'B')
				+ (thisman != 'H' && thisman != 'F')
				+ (thisman != 'F' && thisman != 'H') + (thisman != 'C')
				+ (thisman == 'H' || thisman == 'F');
		if (sum == n) {
			g = g + 1;
			winner = thisman;
		}
	}
	if (g == 1)
		printf("%c\n", winner);
	if (g == 0 || g > 1)
		printf("DONTKNOW\n");

	return 0;
}
