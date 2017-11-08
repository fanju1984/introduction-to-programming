/*
 * flu_trends.cpp
 *
 *  Created on: 7 Nov 2017
 *      Author: fanj
 */

#include<iostream>
using namespace std;
#include<string.h>

int main () {
	int N; // number of queries
	cin >> N;
	int flu = 0;
	for (int i = 0; i < N; i ++) {
		int word_count;
		cin >> word_count; // number of words
		for (int j = 0; j < word_count; j ++) {
			char word[21];
			cin >> word;
			if (strcmp (word, "flu") == 0)
				flu ++;
		}
		char month[8];
		cin >> month;
	}
	cout << flu;
	return 0;
}
