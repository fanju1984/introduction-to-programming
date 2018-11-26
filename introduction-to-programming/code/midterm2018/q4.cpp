/*
 * q4.cpp
 *
 *  Created on: 12 Nov 2018
 *      Author: fanj
 */


#include<iostream>
using namespace std;


void sort (int items[], int count) {
	for (int i = 0; i < count - 1; i ++) {
		for (int j = 0; j < count-1-i; j ++) {
			if (items[j] > items[j+1]) {
				int tmp = items[j];
				items[j] = items[j+1];
				items[j+1] = tmp;
			}
		}
	}
}

int main () {
	int n;
	cin >> n;
	int items[2000];
	int count = 0;
	for (int i = 0; i < n; i ++) {
		int m;
		cin >> m;
		for (int j = 0; j < m; j ++) {
			cin >> items[count];
			count ++;
		}
	}

	sort (items, count);

	int this_num, this_count = 0;
	int has_common = 0;
	for (int i = 0; i < count ; i ++) {
		if (i == 0) {
			this_num = items[i];
			this_count = 1;
		} else if (items[i] != this_num) {
			if (this_count == n) {
				cout << this_num << " ";
				has_common = 1;
			}
			this_num = items[i]; // new number
			this_count = 1; // new counter
		} else this_count++; // count of this_number increases
	}
	if (this_count == n) {
		cout << this_num;
		has_common = 1;
	}
	if (has_common == 0) cout << "NO";
}
