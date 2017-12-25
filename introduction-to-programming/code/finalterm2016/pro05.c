/*
 * pro05.c
 *
 *  Created on: 29 Dec 2016
 *      Author: fanj
 */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>



struct YellowPage {
	char name[21];
	int telNum;
	struct YellowPage *next;
};

struct YellowPage* create() {
	int N;
	struct YellowPage* head = NULL;
	scanf("%d", &N);
	for (int i = 0; i < N; i ++) {
		struct YellowPage *cur =
				(struct YellowPage*) malloc(sizeof(struct YellowPage));
		scanf("%s", cur->name);
		scanf("%d", &cur->telNum);
		cur->next = NULL;
		if (head == NULL) head = cur;
		else if (strcmp(cur->name, head->name) < 0) {
			cur->next = head;
			head = cur;
		} else {
			struct YellowPage *prv = head;
			while (prv->next != NULL &&
					strcmp(prv->next->name,cur->name)<=0) {
				prv = prv->next;
			}
			cur->next = prv->next;
			prv->next = cur;
		}
	}
	return head;
}

void display(struct YellowPage *head) {
	struct YellowPage * node = head;
	printf("display data \n");
	while (node != NULL) {
		printf("%s %d \n", node->name, node->telNum);
		node = node->next;
	}
}
int main() {
	display(create());
	return 0;
}
