/*
 * add.c
 *
 *  Created on: 14 Nov 2016
 *      Author: fanj
 */

#include<stdio.h>
static int LEN = 101;

int main() {
	char a[LEN], b[LEN];
	scanf("%s %s", a, b);
	int len1 = 0, len2 = 0;
	for (int i = 0; i < LEN; i ++) {
		if (a[i] == '\0') break;
		len1 ++;
	}
	for (int i = 0; i < LEN; i ++) {
		if (b[i] == '\0') break;
		len2 ++;
	}
	int max_len = len1 > len2 ? len1 : len2;
	int carry = 0;
	int sum[LEN + 1];
	for (int i = 0; i < max_len; i ++) {
		int a_digit = 0, b_digit = 0;
		if (i < len1) a_digit = a[len1 - i - 1] - '0';
		if (i < len2) b_digit = b[len2 - i - 1] - '0';
		int digit = carry + a_digit + b_digit;
		carry = 0;
		if (digit >= 10) {
			digit -= 10;
			carry = 1;
		}
		sum[max_len - i] = (digit + '0');
	}
	if (carry == 1) sum[0] = '1';
	else sum[0] = '0';
	for (int i = 0; i < max_len + 1; i ++) {
		if (i == 0 && sum[i] == '0') continue;
		printf("%c", sum[i]);
	}
	return 0;
}
