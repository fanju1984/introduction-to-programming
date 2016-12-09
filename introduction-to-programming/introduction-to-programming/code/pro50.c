/*
 * pro50.c
 *
 *  Created on: 26 Nov 2016
 *      Author: fanj
 */

#include<stdio.h>

int main () {
	char letters[101];
	char numbers[101];
	int occur[10];

	// Initialize the arrays
	for (int i = 0; i < 101; i ++) {
		letters[i] = '\0';
		numbers[i] = '\0';
	}
	for (int i = 0; i < 10 ; i ++) {
		occur[i] = 0;
	}

	// Read the input char by char
	char ch;
	int l_index = 0, n_index = 0;
	while ((ch = getchar()) != '#') {
		if (ch >= '0' && ch <= '9') {
			numbers[n_index ++] = ch;
			occur [ch - '0'] ++;
		} else if ((ch >= 'a' && ch <= 'z') ||
				(ch >= 'A' && ch <= 'Z')) {
			letters[l_index ++] = ch;
		}
	}

	// print the results;
	printf("%s\n", numbers);
	printf("%s\n", letters);
	for (int i = 0; i < 10; i ++) {
		if (occur[i] > 0)
			printf("%c %d\n", '0' + i, occur[i]);
	}

	return 0;
}
