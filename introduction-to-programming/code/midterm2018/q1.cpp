/*
 * q1.cpp
 *
 *  Created on: 12 Nov 2018
 *      Author: fanj
 */


#include<iostream>
using namespace std;
#include<string.h>

int main1 () {
	char num[5];
	cin >> num;
	int len = strlen(num);
	for (int i = len-1; i >=0; i --) {
		cout << num[i] << ",";
	}
	cout << len;
	return 0;
}
