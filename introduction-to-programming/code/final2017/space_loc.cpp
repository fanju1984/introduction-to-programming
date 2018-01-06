/*
 * space_loc.cpp
 *
 *  Created on: 13 Nov 2017
 *      Author: fanj
 */

#include<iostream>
using namespace std;
#include<math.h>

int ComputeDist (int x1, int y1, int z1,
		int x2, int y2, int z2) {
	int sum = 0;
	sum += (x1-x2)*(x1-x2);
	sum += (y1-y2)*(y1-y2);
	sum += (z1-z2)*(z1-z2);
	double rst = sqrt((double)sum);
	int rst_int = (int) rst;
	return rst_int;
}

int main () {
	int x[4], y[4], z[4];
	int min[3], max[3];
	for (int i = 0; i < 4; i ++) {
		cin >> x[i] >> y[i] >> z[i];
		if (i==0) {
			min[0] = max[0] = x[i];
			min[1] = max[1] = y[i];
			min[2] = max[2] = z[i];
		} else {
			if (x[i] > max[0]) max[0] = x[i];
			if (y[i] > max[1]) max[1] = y[i];
			if (z[i] > max[2]) max[2] = z[i];
			if (x[i] < min[0]) min[0] = x[i];
			if (y[i] < min[1]) min[1] = y[i];
			if (z[i] < min[2]) min[2] = z[i];
		}
	}
	int min_dist = -1;
	int rst[3000];
	int index = 0;
	for (int i = min[0]; i <= max[0]; i++) {
		for (int j = min[1]; j <= max[1]; j ++) {
			for (int k = min[2]; k <= max[2]; k++) {
				int dist_sum = 0;
				for (int l = 0; l < 4; l++) {
					int dist = ComputeDist(i,j,k,
							x[l],y[l],z[l]);
					dist_sum+=dist;
				}
				if (min_dist < 0 || dist_sum<min_dist) {
					min_dist = dist_sum;
					index = 0;
					rst[index++] = i;
					rst[index++] = j;
					rst[index++] = k;
				} else if (dist_sum == min_dist) {
					rst[index++] = i;
					rst[index++] = j;
					rst[index++] = k;
				}
			}
		}
	}

	cout << min_dist << " " << index/3 << endl;
	for (int i = 0; i < index; i ++) {
		cout << rst[i];
		if (i % 3 == 2) cout << endl;
		else cout << " ";
	}

}
