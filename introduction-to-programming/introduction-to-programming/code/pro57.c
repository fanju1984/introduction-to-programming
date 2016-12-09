/*
 * pro57.c
 *
 *  Created on: 26 Nov 2016
 *      Author: fanj
 */

#include<stdio.h>

int static MAX_T = 100;
int static MAX_B = 16;
int static MAX_S = 8;

int BToDecimal (char num[], int B);

int main () {
	int t_num;
	int decs[MAX_T];
	scanf("%d", &t_num); // read T
	for (int i = 0; i < t_num; i ++) {
		// use char array to store the numbers
		char p[MAX_S+1], q[MAX_S+1], r[MAX_S+1];
		scanf("%s", p); scanf("%s", q); scanf("%s", r);
		int b = 2;
		for (; b <= MAX_B; b ++) {
			// convert numbers to decimals
			int p_dec = BToDecimal(p, b);
			int q_dec = BToDecimal(q, b);
			int r_dec = BToDecimal(r, b);
			if (p_dec != -1 && q_dec != -1 && r_dec != -1) {
				if (p_dec * q_dec == r_dec) break; // check
			}
		}
		if (b > 16) b = 0; // unsolvable
		decs[i] = b;
	}
	for (int i = 0; i < t_num; i ++)
		printf("%d\n", decs[i]);
	return 0;
}

int BToDecimal (char num[], int B) {
	int dec = 0;
	for (int i = 0; i < MAX_S; i ++) {
		if (num[i] - '0' >= B) return -1; // invalid!
		if (num[i] == '\0') break;
		dec = dec * B + (num[i] - '0');
	}
	return dec;
}
