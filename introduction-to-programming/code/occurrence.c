/*
 * occurrence.c
 *
 *  Created on: 20 Nov 2016
 *      Author: fanj
 */
/*
#include<stdio.h>
static int MAX_SIZE = 65536;
int main () {
	int nums[MAX_SIZE];
	for (int i = 0; i < MAX_SIZE; i ++) nums[i] = 0;
	int len;
	scanf("%d", &len);
	for (int i = 0; i < len; i ++) {
		int index;
		scanf("%d", &index);
		nums[index + 32768] ++;
	}
	int printed = 0;
	for (int i = 0; i < MAX_SIZE; i ++) {
		if (nums[i] > 1) {
			printf("%d:%d\n", i - 32768, nums[i]);
			printed = 1;
		}
	}
	if (printed == 0) printf("NO");
	return 0;
}

*/
