/*
 * poker_sort.c
 *
 *  Created on: 24 Oct 2017
 *      Author: fanj
 */

#include<stdio.h>
#define MAX_NUM 100

struct Poker  //名为Poker的结构类型
{
     char  suit;  //花色
     char card;   //牌面
     int code;    //编码
};

int main () {
	struct Poker cards[MAX_NUM];
	int N = 0; // number of cards
	char suit_order[4] = {'D', 'C', 'H', 'B'};
	char card_order[13] = {'2', '3', '4', '5', '6',
						'7', '8', '9', 'X', 'J', 'Q', 'K', 'A'};
	char str[2 * MAX_NUM + 1];

	// Input the cards
	scanf ("%s", str); // read the card sequence
	for (int i = 0; i < 2 * MAX_NUM + 1; i ++) {
		if (str[i] == '\0') break;
		if (i % 2 == 0) cards[i/2].suit = str[i];
		else {
			cards[i/2].card = str[i];
			N ++;
		}
	}

	// encode the cards
	for (int i = 0; i < N; i ++) {
		cards[i].code = 0;
		for (int j = 0; j < 4; j ++) {
			if (suit_order[j] == cards[i].suit) {
				cards[i].code += j * 100;
				break;
			}
		}
		for (int j = 0; j < 13; j ++) {
			if (card_order[j] == cards[i].card) {
				cards[i].code += j;
				break;
			}
		}
	}

	// sort the pokers
	for (int i = 0; i < N-1; i ++) {
		int swap = 0;
		for (int j = 0; j < N-1-i; j ++) {
			if (cards[j].code > cards[j+1].code) {
				struct Poker tmp = cards[j];
				cards[j] = cards[j+1];
				cards[j+1] = tmp;
				swap = 1;
			}
		}
		if (swap == 0) break;
	}

	// print the pokers
	for (int i = 0; i < N; i ++) {
		printf ("%c%c", cards[i].suit, cards[i].card);
	}
	return 0;
}
