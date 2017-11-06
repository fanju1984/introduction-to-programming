/*
 * yoj1049.cpp
 *
 *  Created on: 5 Nov 2017
 *      Author: fanj
 */

#include<iostream>
using namespace std;
#include<string.h>

struct Letter {
	char let;
	int freq;
};

void CountFreq(char str[], int len, struct Letter ls[]);
void SortLetters(struct Letter ls[]);

int main() {
	char str[251];
	struct Letter ls[26];
	cin.getline(str, 251);
	int len = strlen(str);

	CountFreq (str, len, ls);
	SortLetters (ls);

	for (int i = 0; i < 26; i++) {
		if (ls[i].freq == 0)
			break;
		cout << ls[i].let << " " << ls[i].freq << endl;
	}
	return 0;
}

void CountFreq(char str[], int len, struct Letter ls[]) {
	for (int i = 0; i < 26; i++) {
		ls[i].let = 'a' + i;
		ls[i].freq = 0;
	}

	for (int i = 0; i < len; i++) {
		char c = str[i];
		if (c >= 'A' && c <= 'Z')
			c += ('a' - 'A');
		if (c >= 'a' && c <= 'z') {
			ls[c - 'a'].freq++;
		}
	}
}

void SortLetters(struct Letter ls[]) {
	for (int i = 0; i < 26 - 1; i++) {
		for (int j = 0; j < 26 - 1 - i; j++) {
			if ((ls[j].freq < ls[j + 1].freq)
					|| (ls[j].freq == ls[j + 1].freq
							&& ls[j].let > ls[j + 1].let)) {
				struct Letter tmp;
				tmp = ls[j];
				ls[j] = ls[j + 1];
				ls[j + 1] = tmp;
			}
		}
	}
}
