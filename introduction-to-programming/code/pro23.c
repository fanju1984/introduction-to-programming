/*
 * pro23.c
 *
 *  Created on: 19 Oct 2017
 *      Author: fanj
 */

#include<stdio.h>

int main () {
	int N,answer, has_ans = 0;
	scanf ("%d", &N);
	for (answer = 0; answer <=N; answer += 7) {
		if (answer % 2 == 1 &&
				answer % 3 == 2 &&
				answer % 5 == 4 &&
				answer % 6 == 5) {
			printf ("%d\n", answer);
			has_ans = 1;
		}
	}
	if (has_ans == 0) printf ("No answer");
	return 0;
}
