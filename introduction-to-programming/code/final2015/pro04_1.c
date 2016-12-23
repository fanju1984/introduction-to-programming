/*
 * pro04_1.c
 *
 *  Created on: 22 Dec 2016
 *      Author: fanj
 */
/*
struct node{
	int m;
	struct node *next;
};

struct node * delNode(struct node *head, int n )
{
	if (n == 1) {
		head = head->next;
	} else {
		struct node *cur = head;
		for (int i = 0; i < n-2; i ++) {
			cur = cur->next; // find (n-1)-th node
		}
		cur->next = cur->next->next; // delete cur->next
	}
	return head;
}

struct node *insertNode(struct node *head, int n, int m)
{
	struct node *cur = (struct node*)malloc(sizeof(struct node));
	cur->m = m;
	cur->next = NULL;
	if (n == 0) {
		//if (head != NULL) {
		cur->next = head;
		//}
		head = cur;
	} else {
		struct node *prv = head;
		for (int i = 0; i < n-1; i ++) {
			prv = prv->next; // find (n)-th node
		}
		cur->next = prv->next;
		prv->next = cur;
	}
	return head;
}

int main() {
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i ++) {

	}
}
*/
