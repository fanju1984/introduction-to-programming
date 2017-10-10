/*
 * number_guess.c
 *
 *  Created on: 10 Oct 2017
 *      Author: fanj
 */

#include<stdio.h>

int main () {
	int num = 31;
	int count = 1;
	int guess = 0;
	while (1) {
		printf ("# of attempt: %d \n", count);
		printf ("Please guess an odd number in [1,99]\n") ;
		scanf ("%d", &guess) ;
		if (guess % 2 == 0) {
			printf ("Please guess an ODD number\n");
			continue;
		}
		if (guess > num) {
			printf ("It is too big\n");
		} else if (guess < num) {
			printf ("It is too small\n");
		} else {
			printf ("Bingo! The number is %d", num);
			break;
		}
		count ++;
	}
	return 0;
}
