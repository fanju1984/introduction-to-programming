/*
 * yoj1030.cpp
 *
 *  Created on: 5 Nov 2017
 *      Author: fanj
 */

#include<iostream>
using namespace std;
#include<stdio.h>
#include<string.h>

int main() {
	char str[1001];
	int i;
	for(i=0;;i++){
		scanf("%c",&str[i]);
		if(str[i]=='\n' || str[i]==EOF)
			break;
	}
	int len = i;
	//cin.getline(str, 1001);
	//int len = strlen(str);
	int pal = 1;
	for (int i = 0; i < len / 2; i ++) {
		if (str[i] != str[len-1-i]) {
			pal = 0;
			break;
		}
	}
	if (pal == 1) cout << "Yes";
	else cout << "No";
	return 0;
}
