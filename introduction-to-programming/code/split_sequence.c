/*
 * split_sequence.c
 *
 *  Created on: 14 Nov 2016
 *      Author: fanj
 */

#include<stdio.h>
#include<math.h>

int main() {
	int n;
	int nums[1001];
	scanf("%d", &n);
	int p = 0, q = 0;
	nums[0] = 0;
	for (int i = 1; i <= n; i ++) {
		scanf("%d", &nums[i]);
		q += nums[i];
	}

	int minp, minq;
	for (int i = 1; i <= n + 1; i ++) {
		p += nums[i - 1];
		q -= nums[i - 1];
		if (i == 1) {
			minp = p;
			minq = q;
		} else if (fabs(p-q) < fabs(minp-minq)) {
			minp = p;
			minq = q;
		} else if (fabs(p-q) == fabs(minp-minq)){
			if (p >= q) {
				minp = p;
				minq = q;
			}
		}
	}
	printf("%d %d", minp, minq);
	return 0;
}
