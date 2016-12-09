/*
 * pro92.c
 *
 *  Created on: 4 Dec 2016
 *      Author: fanj
 */

#include<stdio.h>

static int N = 4;
static int ADD = 0;
static int SUB = 1;
static int MUL = 2;
static int DIV = 3;
static int result = 0;

int tfp(int ary[], int step, int used[]);

int main() {
	int ary[N];
	for (int i = 0; i < N; i ++) {
		scanf("%d", &ary[i]);
	}
	int used[N];
	for (int i = 0; i < N; i ++) used[i] = 0;
	int flag = tfp(ary, 1, used);
	if (flag == 1) printf("true");
	else printf("false");
	return 0;
}

int tfp(int ary[], int step, int used[]) {
	if (step > N) {
		if (result == 24) return 1;
		else return 0;
	}
	// pick an element
	for (int i = 0; i < N; i ++) {
		if (used[i] == 1) continue; // already used;
		// set the flags
		used[i] = 1;
		// update the result
		if (step == 1) {
			result = ary[i];
			if (tfp(ary, step + 1, used) == 1)
				return 1;
		}
		else { // try different operators
			int part_result = result;
			for (int op = 0; op < 4; op ++) {
				result = part_result;
				if (op == ADD) result += ary[i];
				else if (op == SUB) result -= ary[i];
				else if (op == MUL) result *= ary[i];
				else if (op == DIV && result % ary[i] == 0) {
					result /= ary[i];
				}
				if (tfp(ary, step + 1, used) == 1) return 1;
			}
		}
		// reset the flags
		used[i] = 0;
	}
	return 0;
}

