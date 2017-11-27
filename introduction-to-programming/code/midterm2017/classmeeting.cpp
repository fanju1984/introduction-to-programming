/*
 * classmeeting.cpp
 *
 *  Created on: 13 Nov 2017
 *      Author: fanj
 */

#include<iostream>
using namespace std;
#include<string.h>

struct Slot {
	char name[4];
	int count;
};

int main () {
	int n, k;
	cin >> n >> k;

	struct Slot slots[49];
	for (int i = 0; i < 7; i ++) {
		for (int j = 0; j < 7; j ++) {
			slots[i*7+j].count = 0;
			slots[i*7+j].name[0]='0'+i+1;
			slots[i*7+j].name[1]='.';
			slots[i*7+j].name[2]='0'+j+1;
			slots[i*7+j].name[3]='\0';
		}
	}

	for (int i = 0; i < n; i ++) {
		char sno[11];
		cin >> sno; // useless
		int num;
		cin >> num;
		for (int j = 0; j < num; j ++) {
			char str[4];
			cin >> str;
			for (int k = 0; k < 49; k ++) {
				if (strcmp(slots[k].name,str)==0) {
					slots[k].count++;
				}
			}
		}
	}

	for (int i = 0; i < 49; i ++) {
		for (int j = 0; j < 49-1-i; j++) {
			if ((slots[j].count>slots[j+1].count)||
					(slots[j].count==slots[j+1].count &&
							strcmp(slots[j].name,slots[j+1].name)==1)) {
				struct Slot tmp;
				tmp = slots[j];
				slots[j]=slots[j+1];
				slots[j+1]=tmp;
			}
		}
	}
	for (int i = 0; i < k; i ++) {
		cout << slots[i].name << " " << slots[i].count << endl;
	}
}
