/*
 * sorted_create.c
 *
 *  Created on: 19 Dec 2016
 *      Author: fanj
 */

#include<stdio.h>

struct Node {
	int num;
	struct Node* next;
};
struct Node* header;

struct Node* create ();
void visit (struct Node* header);
void destroy(struct Node* header);

int main() {
	header = create();
	visit(header);
	destroy(header);
}

struct Node* create () {
	int num;
	while (scanf("%d", &num) == 1) {
		struct Node* cur = (struct Node*) malloc(sizeof(struct Node));
		cur->num = num;
		cur->next = NULL;
		if (header == NULL) { // first node
			header = cur;
		} else {
			if (num < header->num) {
				cur->next = header;
				header = cur;
			} else {
				struct Node* p = header;
				while(p->next != NULL && p->next->num <= num) {
					p = p->next;
				}
				cur->next = p->next;
				p->next = cur;
			}
		}
	}

	return header;
}

void visit (struct Node* header) {
	struct Node* cur = header;
	while (cur != NULL) {
		printf("%d ", cur->num);
		cur = cur->next;
	}
	printf("\n");
}

void destroy(struct Node* header) {
	struct Node* cur = header;
	while (cur != NULL) {
		struct Node* next = cur->next;
		free(cur);
		cur = next;
	}
}
