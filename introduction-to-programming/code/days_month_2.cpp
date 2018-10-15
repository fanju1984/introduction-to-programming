	#include<stdio.h>
/**
 * 一三五七八十腊，三十一天永不差；
 * 四六九冬三十整，
 * 平年二月二十八，
 * 闰年二月二十九。
 */
int main () {
	int year, month;
	printf ("Input year and month using the format yyyy/mm\n");
	scanf("%d/%d", &year, &month);
	int day_num;
	switch(month) {
	case 1:case 3:case 5:case 7:case 8:case 10: case 12:
		day_num = 31;
		break;
	case 4:case 6:case 9:case 11:
		day_num = 30;
		break;
	case 2:
		if ((year % 400 == 0) ||
				(year % 4 == 0 && year % 100 != 0)) {
			day_num = 29;
		} else {
			day_num = 28;
		}
		break;

	default:
		day_num = -1;
		break;	
	}
	printf("Number of days in month %d: %d", month, day_num);
	return 0;
}
