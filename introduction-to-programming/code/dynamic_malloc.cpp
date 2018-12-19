/*
 * dynamic_malloc.cpp
 *
 *  Created on: 19 Dec 2018
 *      Author: fanj
 */

#include<stdlib.h>
#include<iostream>
using namespace std;

struct Stu {
	char name[20];
	int gender;
	float height;
};


int main () {
	int len = 100;
	struct Stu* ptr;
	ptr = (struct Stu*)malloc (len * sizeof(struct Stu));

	cin >> ptr[1].name;
	cout << (ptr+1)->name;

	realloc (ptr, 2*len*sizeof(struct Stu));

	free(ptr);
}
