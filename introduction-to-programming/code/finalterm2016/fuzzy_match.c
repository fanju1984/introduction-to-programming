/*
 * pro06.c
 *
 *  Created on: 23 Dec 2016
 *      Author: fanj
 */

#include<stdio.h>
#include<math.h>
#include<string.h>

int distance[301][301];

int editDistance(char a[], char b[],
		int i, int j);

int main () {
	char a[301];
	char b[301];
	scanf("%s %s", a, b);
	int len_a = strlen(a);
	int len_b = strlen(b);
	for (int i = 0; i < len_a; i ++) {
		for (int j = 0; j < len_b ; j ++) {
			distance[i][j] = -1;
		}
	}

	int ed = editDistance(a, b, len_a-1, len_b-1);
	printf("%d", ed);
	int min_len = len_a < len_b ? len_a : len_b;
	if (ed <= min_len / 2) printf(" matched");
	else printf(" unmatched");
	return 0;
}

int editDistance(char a[], char b[], int i, int j) {
	if (j == -1) return i+1;
	else if (i == -1) return j+1;
	else {
		if (distance[i][j]!=-1) return distance[i][j];
		int ed;
		if (a[i] == b[j]) ed = editDistance(a,b,i-1,j-1);
		else {
			int ed1 = editDistance(a, b, i-1, j);
			int ed2 = editDistance(a, b, i, j-1);
			int ed3 = editDistance(a, b, i-1, j-1);
			ed = ed1 + 1;
			if (ed > ed2+1) ed = ed2+1;
			if (ed > ed3+1) ed = ed3+1;
		}
		//printf("debug: %d, %d: %d\n", i, j, ed);
		distance[i][j] = ed;
		return ed;
	}

}