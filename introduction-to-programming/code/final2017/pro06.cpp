/*
 * pro06.cpp
 *
 *  Created on: 25 Dec 2017
 *      Author: fanj
 */
/*
#include<iostream>
using namespace std;
#define SIZE 600

int sol = 0;

void DistPerm(int i, char items[SIZE],
		int used [SIZE], int choices[SIZE], int n);

int main () {
	int n;
	cin >> n;
	char items[SIZE];
	cin >> items;
	// Sort the items
	for (int i = 0; i < n-1; i ++) {
		for (int j = 0; j < n-1-i; j ++) {
			if (items[j] > items[j+1]) {
				char tmp = items[j];
				items[j] = items[j+1];
				items[j+1] = tmp;
			}
		}
	}
	int used [SIZE];
	int choices[SIZE];
	for (int i = 0; i < n; i ++) used[i]=0;
	DistPerm(0, items, used, choices, n);
	cout << sol;
	return 0;
}

void DistPerm(int i, char items[SIZE],
		int used [SIZE], int choices[SIZE], int n) {
	if (i == n) { // base case;
		for (int j = 0; j < n; j ++) cout << items[choices[j]];
		cout << endl;
		sol ++;
	} else {
		for (int j = 0; j < n; j ++) {
			if (used[j] == 1) continue;
			int dup = 0;
			for (int k = j-1; k >= 0; k --) {
				if (used[k] == 0 &&
						items[k] == items[j]) {
					dup = 1;
					break;
				}
			}
			if (dup == 1) continue;
			used[j] = 1;
			choices[i] = j;
			DistPerm(i+1, items, used, choices, n);
			used[j] = 0;
		}
	}
}
*/
