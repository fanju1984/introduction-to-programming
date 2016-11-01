/*
 * pound.c -- defines a function with an argument
 *
 *  Created on: 31 Oct 2016
 *      Author: fanj
 */

#include <stdio.h>

void pound(int n);

int main(void) {
	int times = 5;
	char ch = '!';
	float f = 6.0;
	pound(times);
	pound(ch);
	pound((int) f); // cast forces f -> int
	return 0;
}
void pound(int n)   // ANSI-style function header,
{                   // which says takes one int argument */
	while (n-- > 0)
		printf("#");
	printf("\n");
}
