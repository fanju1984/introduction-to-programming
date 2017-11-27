/*
 * piecewise.cpp
 *
 *  Created on: 13 Nov 2017
 *      Author: fanj
 */

#include<iostream>
using namespace std;
#include<math.h>
#include<stdio.h>

double func (double x) {
	if (x >= -1 && x <= 1) {
		return fabs(x-1)-2;
	} else {
		return 1/(x*x+1);
	}
}

int main () {
	double x;
	cin >> x;
	double y = func(func(x));
	printf ("%.2f", y);
	return 0;
}
