/*
 * date.cpp
 *
 *  Created on: 25 Dec 2017
 *      Author: fanj
 */

#include<iostream>
using namespace std;
#include<stdio.h>
#include<string.h>

int strToInt (char *ptr) {
	int num = 0;
	while (*ptr != '\0') {
		num = num * 10 + (*ptr) - '0';
		ptr++;
	}
	return num;
}

int main () {
	char date[50]= "";
	cin.getline(date, 50);
	int year=-1, month=-1, day=-1;
	char *mchar[12] = {"January","February","March","April",
			"May","June","July","August",
			"September","October","November","December"};

	char *pch = strtok(date, ", /-.");
	while (pch != NULL) {
		int len = strlen(pch);
		if (len == 4 && (*pch >= '0' && *pch <= '9')) {
			year = strToInt(pch);
		} else if (len <= 2) {
			if (month == -1) month = strToInt(pch);
			else day = strToInt(pch);
		} else {
			for (int i = 0 ; i < 12; i ++) {
				if (strcmp(mchar[i],pch)==0) {
					month = i + 1;
					break;
				}
			}
		}
		pch = strtok(NULL, ", /-.");
	}
	printf ("%d%02d%02d", year, month, day);
	return 0;
}
