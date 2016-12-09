/*
 * miner.c
 *
 *  Created on: 14 Nov 2016
 *      Author: fanj
 */


#include<stdio.h>
static int MAX_LEN = 1000;
int is_prime(int num);

int main() {
	int len;
	int numbers[MAX_LEN];
	int flags[MAX_LEN];
	scanf("%d", &len);
	for (int i = 0 ; i < len; i ++) {
		int num;
		scanf("%d", &num);
		numbers[i] = num;
	}

	for (int i = 0 ; i < len; i ++) {
		flags[i] = is_prime(numbers[i]);
	}
	for (int i = 0; i < len; i ++) {
		if (flags[i] == 1) printf("%d ", numbers[i]);
	}
	printf("\n");
	for (int i = 0; i < len; i ++) {
		if (flags[i] == 0) printf("%d ", numbers[i]);
	}
	return 0;
}

int is_prime(int num) {
	if (num == 1) return 0;
	for (int i = 1; i <= num; i ++) {
		int quo = num / i;
		if (num == i * quo && i > 1 && i < num)
			return 0;
	}
	return 1;
}
