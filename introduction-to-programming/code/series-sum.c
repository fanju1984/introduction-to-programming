/*
 * series-sum.c
 *
 *  Created on: 20 Nov 2016
 *      Author: fanj
 */


#include<stdio.h>

static int MAX_DIGIT = 16;
int main () {
	char ch;
	int len;
	scanf("%c %d", &ch, &len);
	int start = 0;
	if (ch >= '0' && ch <= '9') start = ch - '0';
	else if (ch >= 'A' && ch <= 'F') start = 10 + ch - 'A';
	long long sum = 0;
	for (int i = start; i < MAX_DIGIT; i ++) {
		long long num = 0;
		for (int j = 0; j < len; j ++) {
			int digit = (i + j) % 16;
			num = num * 16 + digit;
		}
		sum += num;
	}
	printf("%lld", sum);
	return 0;
}
