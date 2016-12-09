/*
 * series-sum-plus.c
 *
 *  Created on: 21 Nov 2016
 *      Author: fanj
 */


#include<stdio.h>

int static MAX_SIZE = 16;
int main () {
	char ch;
	int cardinal, len;
	scanf("%c %d %d", &ch, &cardinal, &len);
	int start = 0;
	if (ch >= '0' && ch <= '9') start = ch - '0';
	else if (ch >= 'A' && ch <= 'F') start = 10 + ch - 'A';

	// Compute the sum
	long long sum = 0;
	for (int i = start; i < cardinal; i ++) {
		long long num = 0;
		for (int j = 0; j < len; j ++) {
			int digit = (i + j) % cardinal;
			num = num * cardinal + digit;
		}
		sum += num;
	}

	// Print the result
	printf("%lld\n", sum);
	if (cardinal == 10) {
		printf("%lld", sum);
	} else {
		char origin[MAX_SIZE];
		int index = 0;
		while (sum > 0) {
			int mod = sum % cardinal;
			if (mod >= 0 && mod <= 9) origin[index] = mod + '0';
			else if (mod >= 10 && mod <= 15) origin[index] = mod - 10 + 'A';
			sum = sum / cardinal;
			index ++;
		}
		for (int i = index - 1; i >= 0; i --) {
			printf("%c", origin[i]);
		}
	}
	return 0;
}
