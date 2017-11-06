/*
 * yoj1048.cpp
 *
 *  Created on: 5 Nov 2017
 *      Author: fanj
 */

#include<iostream>
#include<stdlib.h>
using namespace std;

int main () {
	int n;
	int sales[5000];
	cin >> n;
	for (int i = 0; i < n; i ++)
		cin >> sales[i];
	int sum = 0;
	for (int i = 0; i < n; i ++) {
		int min = sales[i];
		for (int j = i - 1; j >= 0; j --) {
			int diff = abs(sales[i] -sales[j]);
			if (j == i - 1) min = diff;
			else if (diff < min) min = diff;
		}
		sum += min;
	}
	cout <<sum;
	return 0;
}
