/*
 * pro02.c
 *
 *  Created on: 29 Dec 2016
 *      Author: fanj
 */

#include<stdio.h>
#include<string.h>

int main() {
	char s1[27], s2[27];
	scanf("%s", s1);
	scanf("%s", s2);

	int len = strlen(s1);
	int flag = 0;
	char s3[27]="";
	for (int i = 0; i < len; i ++) {
		if (i == 0) {
			flag = (strstr(s1, s2) != NULL);
			for (int j = 0; j < len; j ++) s3[j] = s1[j];
		} else {
			char tmp = s3[len-1];
			for (int j = len-1; j > 0; j--) {
				s3[j] = s3[j-1];
			}
			s3[0] = tmp;
			flag = strstr(s3, s2) != NULL;
		}
		if (flag == 1) break;
	}
	if (flag == 1) printf("true");
	else printf("false");
}

