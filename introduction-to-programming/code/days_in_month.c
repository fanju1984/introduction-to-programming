/*
 * days_in_month.c
 *
 *  Created on: 10 Oct 2017
 *      Author: fanj
 */

#include<stdio.h>

int main () {
	int year, month;
	printf ("Input year and month using the format yyyy/mm\n");
	scanf("%d/%d", &year, &month);
	int day_num;
	switch(month) {
	case 1:
		day_num = 31;
		break;
	case 2:
		if ((year % 400 == 0) ||
				(year % 4 == 0 && year % 100 != 0)) {
			day_num = 29;
		} else {
			day_num = 28;
		}
		break;
	case 3:
		day_num = 31;
		break;
	case 4:
		day_num = 30;
		break;
	case 5:
		day_num = 31;
		break;
	case 6:
		day_num = 30;
		break;
	case 7:
		day_num = 31;
		break;
	case 8:
		day_num = 31;
		break;
	case 9:
		day_num = 30;
		break;
	case 10:
		day_num = 31;
		break;
	case 11:
		day_num = 30;
		break;
	case 12:
		day_num = 31;
		break;
	}
	printf("Number of days in month %d: %d", month, day_num);
	return 0;
}
