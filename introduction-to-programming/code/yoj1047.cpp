/*
 * yoj1047.cpp
 *
 *  Created on: 5 Nov 2017
 *      Author: fanj
 */

#include<iostream>
using namespace std;

struct Stu {
	int no;
	int score;
};

int main () {
	struct Stu s[1000];
	int N;
	cin >> N;

	for (int i = 0; i < N; i ++) {
		cin >> s[i].no
			>> s[i].score;
	}

	for (int i = 0; i < N - 1; i ++) {
		int swap = 0;
		for (int j = 0; j < N-1-i; j ++) {
			if ((s[j].score < s[j+1].score) ||
					(s[j].score == s[j+1].score && s[j].no > s[j+1].no)) {
				struct Stu tmp;
				tmp = s[j];
				s[j] = s[j+1];
				s[j+1] = tmp;
				swap = 1;
			}
		}
		if (swap == 0) break;
	}

	for (int i = 0 ; i < N; i ++) {
		int rank = 0;
		for (int j = 0; j < i; j ++) {
			if (s[j].score > s[i].score) rank++;
		}
		cout << (rank+1) << " ";
		cout << s[i].no << " " << s[i].score << endl;
	}
}
