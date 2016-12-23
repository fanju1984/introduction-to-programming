/*
 * pro02.c
 *
 *  Created on: 22 Dec 2016
 *      Author: fanj
 */
/*
#include<stdio.h>
#include<string.h>

int main() {
	char str[201];
	char *prefix1 = "born in ";
	char *prefix2 = "My major is ";
	gets(str);
	char *start = NULL;
	for (start = str; *start != '\0'; start ++) {
		if (strncmp(start, prefix1, strlen(prefix1)) == 0) { // first match
			for (int i = 0; i < 4; i ++) {
				printf("%c", *(start+strlen(prefix1)+i));
			}
			printf(", ");
		} else if (strncmp(start, prefix2, strlen(prefix2)) == 0) {
			for (char *p = start+strlen(prefix2); *p != '.'; p ++) {
				printf("%c", *p);
			}
			printf("\n");
			break;
		}
	}
	return 0;

}
*/
