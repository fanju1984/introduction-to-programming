/*
 * bicycle_park.cpp
 *
 *  Created on: 15 Nov 2017
 *      Author: fanj
 */

#include<iostream>
using namespace std;
#include<math.h>

int main () {
	int n ;
	cin >> n;
	int dist[50], avb[50], vel[50], time[50];
	for (int i = 0; i < n; i ++) {
		cin >> dist[i];
	}
	for (int i = 0; i < n; i ++) {
		cin >> avb[i];
	}
	for (int i = 0; i < n; i ++) {
		cin >> vel[i];
	}
	for (int i = 0; i < n; i ++) {
		cin >> time[i];
	}

	int min_dist = -1;
	int min_i = 0;
	for (int i = 0; i < n; i ++) {
		int change = round((double) time[i]/10*vel[i]);
		int remain = avb[i] + change;
		if (remain <= 0) continue;
 		if (min_dist == -1 || dist[i] < min_dist) {
			min_dist = dist[i];
			min_i = i;
		}
	}
	if (min_dist < 0) cout << 0;
	else cout << (min_i+1);

}
