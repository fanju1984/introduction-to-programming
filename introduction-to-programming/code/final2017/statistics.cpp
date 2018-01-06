/*
 * statistics.cpp
 *
 *  Created on: 2 Jan 2018
 *      Author: fanj
 */

#include<iostream>
using namespace std;

int main () {
	int n, m;
	cin >> n >> m;
	int part1=0, part2=0;
	int cnt1=0, cnt2=0;
	for (int i = 0; i < n; i ++) {
		int a;
		cin >> a;
		if (a%m == 0) {
			cnt1 ++;
			part1 += a;
		} else {
			cnt2 ++;
			part2 += a;
		}
	}
	if (cnt1 != 0) {
		cout << part1 << endl;
	}
	if (cnt2 != 0) {
		cout << part2 << endl;
	}
}
