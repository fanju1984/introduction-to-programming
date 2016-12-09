/*
 * bubble_sort.c - implement the bubble sort algorithm
 *
 *  Created on: 27 Oct 2016
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

	for (int i = 0; i < count - 1; i ++) {
		int swap = 0;
		for (int j = 0; j < count - 1 - i; j ++) {
			if (arr[j] > arr[j+1]) {
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
				swap = 1;
			}
		}
		if (swap == 0) break;
	}

	printf("Elements in the array AFTER bubble sorting: ");
	for (int i = 0; i < count; i ++) {
		printf("%d ", arr[i]);
	}
	return 0;
}
