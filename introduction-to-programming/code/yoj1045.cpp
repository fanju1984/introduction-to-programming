/*
 * yoj1045.cpp
 *
 *  Created on: 5 Nov 2017
 *      Author: fanj
 */

#include<iostream>
#include<stdio.h>
using namespace std;

int main () {
	int N, P, M;
	int mat1[5][5], mat2[5][5];
	cin >> N >> P >> M;
	for (int i = 0; i < N; i ++)
		for (int j = 0; j < P; j ++)
			cin >> mat1[i][j];

	for (int i = 0; i < P; i ++)
		for (int j = 0; j < M; j ++)
			cin >> mat2[i][j];

	for (int i = 0; i < N; i ++) {
		for (int j = 0; j < M; j ++) {
			int sum = 0;
			for (int k = 0; k < P; k ++) {
				sum += mat1[i][k] * mat2[k][j];
			}
			cout << sum << " ";
		}
		cout << endl;
	}
	return 0;
}
