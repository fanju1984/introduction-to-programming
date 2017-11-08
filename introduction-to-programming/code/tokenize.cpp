/*
 * tokenize.cpp
 *
 *  Created on: 7 Nov 2017
 *      Author: fanj
 */

#include<iostream>
using namespace std;
#include<stdio.h>
#include<string.h>

int main () {
	char line[1001];
	cin.getline(line, 1001);
	int len = strlen(line);
	int s=0,e=0;
	do {
		if (line[e]==' ' || line[e]=='\0') {
			for (int i = s; i < e; i ++)
				cout << line[i];
			cout << endl;
			s = e = e+1;
		} else {
			e++;
		}
	} while (e <= len);
	return 0;
}

