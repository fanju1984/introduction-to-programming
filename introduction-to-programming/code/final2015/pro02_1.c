/*
 * pro02_1.c
 *
 *  Created on: 22 Dec 2016
 *      Author: fanj
 */
/*
 *

#include<stdio.h>
#include<string.h>

int main() {
	char str[201];
	char *prefix1 = "born in ";
	char *prefix2 = "My major is ";
	gets(str);
	// strstr: find substring matches
	char *p = strstr(str, prefix1);
	for (p = p + strlen(prefix1); *p != ','; p++) {
		printf("%c", *p);
	}
	printf(", ");
	char *q = strstr(str, prefix2);
	for (q = q + strlen(prefix2); *q != '.'; q ++) {
		printf("%c", *q);
	}
}
*/
