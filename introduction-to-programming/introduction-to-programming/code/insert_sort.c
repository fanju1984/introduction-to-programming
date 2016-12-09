/*
 * insert_sort.c
 *
 *  Created on: 28 Oct 2016
 *      Author: fanj
 */


#include<stdio.h>

int main () {
	int num;
	int arr[100];
	printf("Input a number to be added in an array (q to exit): ");
	int count = 0;
	while (scanf("%d", &num) == 1) {
		arr[count] = num;
		count ++;
		printf("Input a number to be added in an array (q to exit): ");
	}
	printf("Elements in the array BEFORE sorting: ");
	for (int i = 0; i < count; i ++) {
		printf("%d ", arr[i]);
	}
	printf("\n");


	for (int i = 0; i < count; i ++) {
		int tmp = arr[i];
		int j = i - 1;
		for (; j >= 0; j --) {
			if (arr[j] <= tmp) break;
			arr[j+1] = arr[j];
		}
		arr[j+1] = tmp;
	}

	printf("Elements in the array AFTER insert sorting: ");
	for (int i = 0; i < count; i ++) {
		printf("%d ", arr[i]);
	}
	return 0;
}
