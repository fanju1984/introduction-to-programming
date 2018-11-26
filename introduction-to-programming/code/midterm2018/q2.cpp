/*
 * q2.cpp
 *
 *  Created on: 12 Nov 2018
 *      Author: fanj
 */

#include<iostream>
using namespace std;

int calc (int a, int b, int c, int d, int e, int x) {
	int sum = e;
	int xnew = x;
	sum += d * xnew;
	xnew *= x;
	sum += c*xnew;
	xnew *= x;
	sum += b*xnew;
	xnew *= x;
	sum += a * xnew;
	return sum;
}

int main2 () {
	int n, k;
	cin >> n >> k;
	int a_correct = 0, b_correct=0;
	long long a_score = 0, b_score = 0;
	for (int i = 0; i < n; i ++) { // n rounds
		int a,b,c,d,e,x;
		cin >>a>>b>>c>>d>>e>>x;
		int val = calc(a,b,c,d,e,x);
		long long ans1, ans2;
		cin >> ans1 >> ans2;
		//cout << val << ": " << ans1 << " , " << ans2 << endl;
		if (ans1 == val) {

			a_correct ++;
			int score = 1;
			if (a_correct > k) score = a_correct-k+1;
			a_score += score;
		} else {
			a_correct = 0;
		}
		if (ans2 == val) {
			b_correct ++;
			int score = 1;
			if (b_correct > k) score = b_correct-k+1;
			b_score += score;
		} else {
			b_correct = 0;
		}
	}
	cout << a_score << " " << b_score;
	return 0;
}
