/*
 ============================================================================
 Name        : showIOs.c
 Author      : Ju Fan
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#define BLURB "Authentic imitation!"

#define PAGES 336
#define WORDS 65618

int main() {
	int pages = 931;
	printf("*%d*\n", pages);
	printf("*%2d*\n", pages);
	printf("*%10d*\n", pages);
	printf("*%-10d*\n", pages);


	double rent = 3852.99;
	printf("*%f*\n", rent);
	printf("*%e*\n", rent);
	printf("*%4.2f*\n", rent);
	printf("*%3.1f*\n", rent);
	printf("*%10.3f*\n", rent);
	printf("*%10.3e*\n", rent);
	printf("*%+4.2f*\n", rent);
	printf("*%010.2f*\n", rent);

	printf("%x %X %#x\n", 31, 31, 31);
	printf("**%d**% d**% d**\n", 42, 42, -42);
	printf("**%5d**%5.3d**%05d**%05.3d**\n", 6, 6, 6, 6);


	printf("/%2s/\n", BLURB);
	printf("/%24s/\n", BLURB);
	printf("/%24.5s/\n", BLURB);
	printf("/%-24.5s/\n", BLURB);

	short num = PAGES;
	short mnum = -PAGES;
	printf("num as short and unsigned short:  %d %u\n", num, num);
	printf("-num as short and unsigned short: %d %u\n", mnum, mnum);
	printf("num as int and char: %d %c\n", num, num);
	printf("WORDS as int, short, and char: %d %hd %c\n",
			WORDS, WORDS, WORDS);

	printf("Here's one way to print a ");
	printf("long string.\n");
	printf("Here's another way to print a \
	long string.\n");
	printf("Here's the newest way to print a "
			"long string.\n");      /* ANSI C */

	int age;
	float assets;
	char pet[30];
	printf("Enter your age, assets, and favorite pet.\n");
	scanf("%d, %f", &age, &assets); // use the & here
	scanf("%s", pet);              // no & for char array
	printf("%d $%.2f %s\n", age, assets, pet);

	return 0;
}
