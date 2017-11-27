/*
 * mlp.cpp
 *
 *  Created on: 9 Nov 2017
 *      Author: fanj
 */

#include<iostream>
using namespace std;
#include<math.h>
#include<stdio.h>

int main () {
	int dim[3];
	for (int i = 0; i < 3; i ++)
		cin >> dim[i]; // dimensions

	double in[16], out[16], w[16][16];
	for (int i = 0; i < 2; i ++) {
		// input
		if (i == 0) {
			for (int j=0; j < dim[0]; j++) {
				cin >> in[j];
			}
		} else {
			for (int j = 0; j < dim[i];j++)
				in[j] = out[j];
		}
		// weights

		for (int row = 0; row < dim[i+1]; row++) {
			for (int col = 0; col < dim[i]; col++) {
				cin >> w[row][col];
			}

		}
		// calculation
		for (int row = 0; row < dim[i+1]; row++) {
			out[row] = 0;
			for (int col = 0; col < dim[i]; col++) {
				out[row] += w[row][col] * in[col];
			}
			out[row] = 1.0/(1.0+exp(-out[row]));
		}
	}

	for (int i = 0; i < dim[2]; i++) {
		printf ("%.2lf", out[i]);
		if (i < dim[2]-1) cout << " ";
	}

	return 0;
}
