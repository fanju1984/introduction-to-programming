/*
 * pro74.c
 *
 *  Created on: 4 Dec 2016
 *      Author: fanj
 */

#include<stdio.h>

static int MAX_N = 20;
long long permRank (int ary[], int start, int n);
long long perm_num (int num);
int main() {
	int n;
	scanf("%d", &n);
	int ary[MAX_N];
	for (int i = 0; i < n; i ++) {
		scanf("%d", &ary[i]);
	}
	long long pno = permRank (ary, 0, n);
	printf("%lld", pno + 1);
	return 0;
}

long long permRank (int ary[], int start, int n) {
	if (start == n - 1) return 0;
	// count how many elements smaller than ary[start]
	int smaller_num = 0;
	for (int i = start + 1; i < n; i ++) {
		if (ary[i] < ary[start]) smaller_num ++;
	}
	long long prev_num = smaller_num * perm_num(n-start-1);
	prev_num += permRank(ary, start + 1, n);
	return prev_num;
}

long long perm_num (int num) {
	long long perm_num = 1;
	for (int i = num; i > 0; i --) {
		perm_num *= i;
	}
	return perm_num;
}

