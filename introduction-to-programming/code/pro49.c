/*
 * pro49.c
 *
 *  Created on: 27 Nov 2016
 *      Author: fanj
 */

#include<stdio.h>

void countFrequency(int freqs[26]);
void printFrequency(int freqs[26]);

int main() {
	int freqs[26]; // record frequency of letters
	countFrequency(freqs);
	printFrequency(freqs);
}

void countFrequency(int freqs[]) {
	char ch;
	// initialize!!!
	for (int i = 0; i < 26; i++)
		freqs[i] = 0;
	while ((ch = getchar()) != '\n' && ch != EOF) {
		// change to lower case
		if (ch >= 'A' && ch <= 'Z')
			ch = 'a' + ch - 'A';
		if (ch >= 'a' && ch <= 'z')
			freqs[ch - 'a']++; // update the frequency
	}
}

void printFrequency(int freqs[]) {
	for (int i = 0; i < 26; i++) {
		int max = -1;
		for (int i = 0; i < 26; i++) {
			if (freqs[i] > max) max = freqs[i];
		}
		if (max == 0) break; // letters that do not appear
		for (int i = 0; i < 26; i++) {
			if (freqs[i] == max) {
				printf("%c %d\n", i + 'a', freqs[i]);
				freqs[i] = -1; // already printed
			}
		}
	}
}
