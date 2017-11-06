/*
 * yoj1050.cpp
 *
 *  Created on: 5 Nov 2017
 *      Author: fanj
 */

#include<iostream>
using namespace std;
#include<string.h>

int main () {
	char str[101];
	char letters[101], digits[101];
	cin.getline(str,101,'#');
	int len = strlen(str);
	int freq[10];

	for (int i = 0; i < 10; i ++) freq[i]=0;
	int l_index = 0, d_index = 0;
	for (int i = 0; i < len; i ++) {
		if (str[i]>='0' && str[i]<='9') {
			freq[str[i]-'0']++;
			digits[d_index] = str[i];
			d_index ++;
		} else if (str[i]>='a' && str[i]<='z') {
			letters[l_index] = str[i];
			l_index++;
		}
	}

	for (int i = 0; i < d_index; i ++) cout << digits[i];
	cout << endl;
	for (int i = 0; i < l_index; i ++) cout << letters[i];
	cout << endl;

	for (int i = 0; i < 10; i ++) {
		if (freq[i] == 0) continue;
		cout << i << " " << freq[i] << endl;
	}
	return 0;
}

