/*
 * linked.cpp
 *
 *  Created on: 2 Jan 2018
 *      Author: fanj
 */

#include<iostream>
using namespace std;

struct node {
	int data;
	struct node* next;
};

int getLength(node* head) {
	if (head == NULL)
		return 0;
	struct node* cur = head;
	int cnt = 0;
	while (cur->next != head) {
		cnt++;
		cur = cur->next;
	}
	return cnt + 1;
}
