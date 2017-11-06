/*
 * yoj1028.cpp
 *
 *  Created on: 5 Nov 2017
 *      Author: fanj
 */

#include<iostream>
#include<string.h>
using namespace std;

int main () {
	char num[12];
	cin.getline(num, 12);
	int len = strlen(num);
	int end_index = 0;
	if (num[0] == '-') {
		cout << '-';
		end_index = 1;
	}
	int skip_zero = 1;
	for (int i = len - 1; i >= end_index; i --) {
		if (num[i] == '0') {
			if (skip_zero == 1) continue;
		} else skip_zero = 0;
		cout << num[i];
	}
	return 0;
}
