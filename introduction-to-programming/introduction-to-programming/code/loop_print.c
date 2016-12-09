/*
 * loop_print.c -- printing multiple lines
 *
 *  Created on: 24 Oct 2016
 *      Author: fanj
 */


#include<stdio.h>

int main () {
	int line_num;
	printf("Input the number (1-26) of lines (q to exit): ");
	while (scanf("%d", &line_num) == 1) {
		if (line_num < 1 || line_num > 26) {
			printf("Invalid number of lines (%d). Please try again!\n", line_num);
		} else {
			for (int row = 0; row < line_num; row ++) {
				// print the spaces in the left
				for (int i = 0; i < line_num - row - 1; i ++)
					printf(" ");
				// print the letters in the middle
				for (int i = 0; i < row + 1; i ++)
					printf("%c", 'A' + i);
				for (int i = row - 1; i >= 0; i --)
					printf("%c", 'A' + i);
				printf("\n");
			}
		}
		printf("Input the number (1-26) of lines (q to exit): ");
	}
	return 0;
}
