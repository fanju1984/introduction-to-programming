/*
 * gene.c
 *
 *  Created on: 20 Nov 2016
 *      Author: fanj
 */

#include<stdio.h>
#include<math.h>

static int MAX_LEN = 20;
static int MAX_NUM = 1000;

int compareTo (char g1[], char g2[], char p[]);

int main () {
	int num = 0;
	char p[4];
	scanf("%d\n%c%c%c%c\n", &num,
			&p[0],&p[1],&p[2],&p[3]);
	char genes[MAX_NUM][MAX_LEN];

	// Read the genes
	for (int i = 0; i < num; i ++) {
		scanf("%s", genes[i]);
	}

	// Sort
	for (int i = 0; i < num - 1; i ++) {
		for (int j = 0; j < num - 1 -i; j ++) {
			if (compareTo(genes[j], genes[j + 1], p) < 0) {
				for (int k = 0; k < MAX_LEN; k ++) {
					char tmp = genes[j][k];
					genes[j][k] = genes[j + 1][k];
					genes[j + 1][k] = tmp;
				}
			}
		}
	}

	// Print the sorted genes
	for (int i = 0; i < num; i ++) {
		printf("%s\n", genes[i]);
	}
	return 0;
}

int compareTo (char g1[], char g2[], char p[]) {
	for (int i = 0; i < MAX_LEN; i ++) {
		if (g1[i] == '\0') break;
		if (g1[i] == g2[i]) continue;
		for (int j = 0; j < 4; j ++) {
			if (p[j] == g1[i]) return 1;
			else if (p[j] == g2[i]) return -1;
		}
	}
	return 0;
}
