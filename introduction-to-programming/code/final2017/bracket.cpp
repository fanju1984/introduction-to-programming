/*
 * bracket.cpp
 *
 *  Created on: 26 Dec 2017
 *      Author: fanj
 */

#include<iostream>
using namespace std;

char str[520];

char* findMatchRightPos (char *left, char *start) {
	char *p = start;
	while (*p != '\0') {
		if (*p == '(' || *p == '{') {
			char *q = findMatchRightPos (p, p+1);
			if (q == NULL) return NULL;
			p = q+1;
		} else if (*p == ')') {
			if (left != NULL && *left == '(') return p;
			else return NULL;
		} else if (*p == '}') {
			if (left != NULL && *left == '{') return p;
			else return NULL;
		} else {
			p ++;
		}
	}
	if (left != NULL) return NULL;
	return p;
}


int main () {
	int n;
	scanf("%d\n", &n);
	for (int i = 0; i < n; i ++) {
		cin.getline(str, 500);
		char *q =  findMatchRightPos(NULL, str);
		if (q == NULL) cout << "false";
		else cout << "true";
		cout << endl;
	}
}
