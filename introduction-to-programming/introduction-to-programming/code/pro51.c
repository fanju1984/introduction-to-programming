/*
 * pro51.c
 *
 *  Created on: 27 Nov 2016
 *      Author: fanj
 */


#include<stdio.h>

static int MAX_S = 50;
static int MAX_C = 10;

void readStudentCredits(int credits[], int sids[], int s_credits[],
		int s_num, int c_num);
void sortStudentCredits(int sids[], int s_credits[], int s_num);

int main () {
	int s_num, c_num;
	int credits[MAX_C];
	int sids[MAX_S];
	int s_credits[MAX_S];
	scanf("%d %d", &s_num, &c_num);
	for (int i = 0; i < c_num; i ++) {
		scanf("%d", &credits[i]); // read credit
	}
	readStudentCredits(credits, sids, s_credits, s_num, c_num);
	sortStudentCredits(sids, s_credits, s_num);
	for (int i = 0; i < s_num; i ++) {
		printf("%d %d\n", sids[i], s_credits[i]);
	}
}

void readStudentCredits (int credits[], int sids[], int s_credits[],
		int s_num, int c_num) {
	for (int i = 0; i < s_num; i ++) {
		scanf("%d", & sids[i]);
		s_credits[i] = 0;
		for (int j = 0 ; j < c_num; j ++) {
			int score;
			scanf("%d", &score);
			if (score >= 60)
				s_credits[i] += credits[j];
		}
	}
}

void sortStudentCredits(int sids[], int s_credits[], int s_num) {
	for (int i = 0; i < s_num - 1; i ++) {
		for (int j = 0; j < s_num - 1 - i; j ++) {
			if ((s_credits[j] < s_credits[j + 1]) ||
					(s_credits[j] == s_credits[j + 1] && sids[j] > sids[j + 1])) {
				int t1 = s_credits[j];
				int t2 = sids[j];
				s_credits[j] = s_credits[j + 1];
				s_credits[j + 1] = t1;
				sids[j] = sids[j+1];
				sids[j+1] = t2;
			}
		}
	}
}
