/*
 * month_flu.cpp
 *
 *  Created on: 7 Nov 2017
 *      Author: fanj
 */

#include<iostream>
using namespace std;

struct FluCount {
	char month[8];
	int count;

};

void InitFluCountAry (struct FluCount fcs[]);
void CalcFluCountAry (struct FluCount fcs[]);
void SortFluCountAry (struct FluCount fcs[]);

#define MONTH_NUM 24
int main() {
	struct FluCount fcs[MONTH_NUM];
	InitFluCountAry (fcs);
	CalcFluCountAry (fcs);
	SortFluCountAry (fcs);
	for (int i = 0; i < MONTH_NUM; i ++) {
		if (fcs[i].count == 0) continue;
		cout << fcs[i].month << " " << fcs[i].count << endl;
	}
	return 0;
}

void InitFluCountAry (struct FluCount fcs[]) {
	for (int i = 0; i < MONTH_NUM; i ++) {
		fcs[i].count = 0;
		fcs[i].month[0] = '2';
		fcs[i].month[1] = '0';
		fcs[i].month[2] = '0';
		if (i < 12) fcs[i].month[3] = '6';
		else fcs[i].month[3] = '7';
		fcs[i].month[4] = '-';
		if ((i>=9 && i<=11) ||
				(i>=21 && i<=23))
			fcs[i].month[5] = '1';
		else fcs[i].month[5] = '0';
		if (i < 12) fcs[i].month[6] = '0'+(i+1)%10;
		else fcs[i].month[6]='0'+(i-12+1)%10;
		fcs[i].month[7]= '\0';
	}
}

void CalcFluCountAry (struct FluCount fcs[]) {
	int N; // number of queries
	cin >> N;
	for (int i = 0; i < N; i++) {
		int word_count;
		cin >> word_count; // number of words
		int has_flu = 0;
		for (int j = 0; j < word_count; j++) {
			char word[21];
			cin >> word;
			if (strcmp(word, "flu") == 0)
				has_flu = 1;
		}
		char month[8];
		cin >> month;
		if (has_flu == 0) continue;
		for (int k = 0; k < MONTH_NUM; k++) {
			if (strcmp(fcs[k].month, month) == 0) {
				fcs[k].count ++;
				break;
			}
		}
	}
}

void SortFluCountAry (struct FluCount fcs[]) {
	for (int i = 0; i < MONTH_NUM-1; i ++) {
		for (int j = 0; j < MONTH_NUM-1-i; j++) {
			if ((fcs[j].count < fcs[j+1].count) ||
					(fcs[j].count==fcs[j+1].count &&
					strcmp(fcs[j].month,fcs[j+1].month)==1)) {
				struct FluCount tmp;
				tmp = fcs[j];
				fcs[j] = fcs[j+1];
				fcs[j+1] = tmp;
			}
		}
	}
}
