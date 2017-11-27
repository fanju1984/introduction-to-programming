/*
 * pro64.c
 *
 *  Created on: 8 Dec 2016
 *      Author: fanj
 */

#include<stdio.h>

int decode(int code, int weight);

int main() {
	int weight, n;
	scanf("%d", &weight);
	scanf("%d", &n);
	for (int i = 0; i < n; i ++) {
		char codes[10001];
		scanf("%s", codes);
		int code = 0;
		for (int pos = 0; pos < 10001; pos ++) {
			if (codes[pos] == '\0') break; // end of string
			char ch = codes[pos];
			code = code * 2 + (ch - '0');
			if (pos % 5 == 4) {
				int lit = decode(code, weight);
				code = 0; // reset to new word
				printf("%c", lit);
			}
		}
		printf("\n");
	}
}

int decode(int code, int weight) {
	if (code == 0) return ' '; // whitespace
	code = 31 - code; // negate operation
	int remain = (weight + 'A') % 26;
	code = (26 + code - remain) % 26;
	int lit = 'A' + code;
	return lit;
}

