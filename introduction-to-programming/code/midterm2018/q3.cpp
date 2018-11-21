/*
 * q3.cpp
 *
 *  Created on: 12 Nov 2018
 *      Author: fanj
 */

#include<iostream>
using namespace std;
#include<string.h>

int main () {
	char s1[110]={'\0'}, s2[110]={'\0'};
	gets (s1);
	gets (s2);
	int len1 = strlen(s1);
	int len2 = strlen(s2);

//	cout << len1 << " " << len2 << endl;

	int minus = 0;
	for (int i = 0; i < len1 && i < len2; i ++) {
		if (s1[i] == s2[i]) continue;
		minus = s1[i] - s2[i];
		break;
	}
	cout << minus;
	return 0;
}
