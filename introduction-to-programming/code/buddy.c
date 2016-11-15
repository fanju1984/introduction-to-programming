/*
 * buddy.c
 *
 *  Created on: 14 Nov 2016
 *      Author: fanj
 */

#include<stdio.h>

static int LEN = 26;
int main() {
	char ch, prev, next;
	char bound = '\0';
	scanf("%c", &ch);
	if (ch >= 'a' && ch <= 'z') bound = 'a';
	else if (ch >= 'A' && ch <= 'Z') bound = 'A';

	prev = (ch - bound - 1 + LEN) % LEN + bound;
	next = (ch - bound + 1) % LEN + bound;

	if (bound != '\0') printf("%c%c%c\n", prev, ch, next);
	return 0;
}
