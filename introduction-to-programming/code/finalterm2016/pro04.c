/*
 * pro04.c
 *
 *  Created on: 29 Dec 2016
 *      Author: fanj
 */

#include<stdio.h>
#include<string.h>

int main() {
	char n1[301], n2[301];
	scanf("%s %s", n1, n2);
	int l1 = strlen(n1);
	int l2 = strlen(n2);

	char *p = NULL;
	int len, mul=0;
	if (l1 < l2) {
		p = n2;
		len = l2;
		for (int i = 0; i < l1; i ++) {
			mul = mul*10 + n1[i]-'0';
		}
	} else {
		p = n1;
		len = l1;
		for (int i = 0; i < l2; i ++) {
			mul = mul*10 + n2[i]-'0';
		}
	}
	if (mul == 0) {
		printf("0");
		return 0;
	}
	int rst[l2+l1+1];
	for (int i = 0; i < l2+l1+1; i ++) rst[i]=0;
	int count = 0;
	for (int i = len-1; i >= 0; i --) {
		int part = mul * (*(p+i)-'0');
		//printf("\tdebug: %d\n", part);
		int carry = 0;
		count = len -1 - i;
		while (part > 0) {
			int digit = part % 10;
			rst[count] += digit + carry;
			if (rst[count]>=10) {
				carry = 1;
				rst[count] -= 10;
			} else carry = 0;
			part /= 10;
			count++;
		}

		if (carry != 0) rst[count] = carry;
		else count --;
	}
	for (int i = count; i >= 0; i--) {
		printf("%d", rst[i]);
	}
}
