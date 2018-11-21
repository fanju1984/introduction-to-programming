/*
 * q5_new.cpp
 *
 *  Created on: 13 Nov 2018
 *      Author: fanj
 */

#include<iostream>
using namespace std;
#include<string.h>

int abs (int x) {
	if (x<=0) return -x;
	else return x;
}

int main () {
	char op, a[2010],b[2010];
	int rst[2010];
	for (int i = 0; i < 2010; i ++) rst[i] = 0;
	cin >> op >> a >> b; // input as strings
	int l1 = strlen(a);
	int l2 = strlen(b);
	int i, j;
	int count = 0;

	for (i = l1-1, j = l2-1; i>=0 || j>=0;
			i--, j--) {
		// read the digits
		int d1 = 0, d2 = 0;
		if (i>=0 && a[i]!='-') d1=a[i]-'0';
		if (j>=0 && b[j]!='-') d2=b[j]-'0';
		int d_rst = 0;
		// determine the single digit operation
		if (a[0] == '-') d_rst -= d1;
		else d_rst += d1;
		if (op=='+' && b[0]=='-') d_rst -= d2;
		else if (op=='-' && b[0]!='-') d_rst -= d2;
		else d_rst += d2;
		rst[count] = d_rst;
		count++;
	}
	// operate on the digits <=-10 or >=10
	for (int i = 0; i < count; i ++) {
		//cout << "Debug: " << rst[i] << endl;
		if (rst[i] >= 10) {
			rst[i] -= 10;
			rst[i+1] += 1;
		} else if (rst[i] <= -10) {
			rst[i] += 10;
			rst[i+1] -= 1;
		}
	}

	int sign = 1; // 1:positive; 0:negative
	int skip_zero = 1;
	for (int i=count; i >= 0; i--) {
		//cout << "Debug: " << rst[i] << endl;
		if (rst[i] == 0 && skip_zero == 1) continue;
		else {
			if (skip_zero == 1) {
				sign = rst[i]>0;
				if (sign != 1) cout << "-"; // negative result
			}

			if (i == 0) cout << abs(rst[i]);
			else {
				if (sign == 1) {
					int shift = 0;
					for (int k = i-1; k >= 0; k --) {
						if (rst[k] == 0) continue;
						if (rst[k] > 0) break;
						else {
							shift = 1;
							break;
						}
					}
					if (shift == 1) {
						rst[i] -= 1;
						rst[i-1] += 10;
					}
				}
				else {
					int shift = 0;
					for (int k = i - 1; k >= 0; k --) {
						if (rst[k] == 0) continue;
						if (rst[k] < 0) break;
						else {
							shift = 1;
							break;
						}
					}
					if (shift == 1) {
						rst[i] += 1;
						rst[i-1] -= 10;
					}
				}
				if (skip_zero == 1) {
					if (rst[i] != 0) {
						skip_zero =0;
						cout << abs(rst[i]);
					}
				} else {
					cout << abs(rst[i]);
				}
			}
		}
	}
}
