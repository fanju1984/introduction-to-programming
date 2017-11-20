/*
 * hanoi.cpp
 *
 *  Created on: 20 Nov 2017
 *      Author: fanj
 */
#include<iostream>
using namespace std;

int move (int n, char from, char spare, char to); // declaration

int main () {
	int n = 4;
	char from = 'A';
	char spare = 'B';
	char to = 'C';
	int step = move (n, from, spare, to);
	cout << "number of steps: " << step << endl;
}

int move (int n, char from, char spare, char to) {
	if (n == 1) {
		cout << "move " << n << " plate(s) from " <<
				from << " to " << to << endl;
		return 1;
	} else {
		int step1 = move (n-1, from, to, spare);
		cout << "move 1 plate(s) from " << from <<
				" to " << to << endl;
		int step2 = move (n-1, spare, from, to);
		return step1+step2+1;
	}
}
