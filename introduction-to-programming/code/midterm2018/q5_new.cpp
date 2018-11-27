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
	int l1 = strlen(a); // 字符串a存储第一个数，l1是其长度。
	int l2 = strlen(b); // 字符串b存储第二个数，l2是其长度。
	int i, j;
	int count = 0;
	
	/**
	* Step 1: 从右至左，逐位进行加/减操作（考虑符号） 
	*         将计算的结果赋值到一个int数组中。
	**/
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
	
	/**
	* Step 2: 如果int数组的某位大于等于10或小于等于-10
	*         对其后一位进行一次进位操作。
	**/
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

	int sign = 1; // 确定结果的符号：1为正数; 0为负数。
	int skip_zero = 1; // 是否要忽略结果开始的0
	for (int i=count; i >= 0; i--) {
		if (rst[i] == 0 && skip_zero == 1) continue;
		else {
			if (skip_zero == 1) {
				sign = rst[i]>0;
				if (sign != 1) cout << "-"; // 判断结果为负数
			}

			if (i == 0) cout << abs(rst[i]);
			else {
				if (sign == 1) { // 如果结果为正数，要对int数组中的负数变为正数。
					int shift = 0;
					// 找到第一个非零正数
					for (int k = i-1; k >= 0; k --) {
						if (rst[k] == 0) continue;
						if (rst[k] > 0) break;
						else {
							shift = 1;
							break;
						}
					}
					if (shift == 1) { // 负数边正数
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
