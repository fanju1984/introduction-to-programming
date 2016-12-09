/*
 * select_sort.c -- implement the select sort algorithm
 *
 *  Created on: 27 Oct 2016
 *      Author: fanj
 */


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
		int min_index = i;
		for (int j = i + 1; j < count; j ++) {
			if (arr[min_index] > arr[j]) {
				min_index = j;
			}
		}
		if (min_index != i) {
			int tmp = arr[min_index];
			arr[min_index] = arr[i];
			arr[i] = tmp;
		}
	}

	printf("Elements in the array AFTER bubble sorting: ");
	for (int i = 0; i < count; i ++) {
		printf("%d ", arr[i]);
	}
	return 0;
}
