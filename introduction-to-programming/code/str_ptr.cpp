/*
 * main.cpp
 *
 *  Created on: 12 Dec 2018
 *      Author: fanj
 */

#include<iostream>
using namespace std;

int main() {
	//char str[5] = {'c', 'h', 'i', 'n', 'a'};
	//str[4] = 'e';
	//*(str+4) = 'e';
	//str++;
	//puts(&str[1]); //hinaH;z��

	char copy[] = "be the best that you can be.";
	char *orig = "beast";

	for (int i = 0; i < 30; i++) {
		printf("%c", copy[i]);
	}
	printf("\n");

	strcpy(copy + 7, orig);
	//printf ("%s", copy); //be the beast

	for (int i = 0; i < 30; i++) {
		printf("%c", copy[i]);
	}
	printf("\n");

	//be the best that you can be.  
	//be the beast hat you can be.    

	char str1[100] = "hello ";
	char *str2 = "world";
	strcat(str1, str2); //hello world
	puts(str1);

	char open_str[] = "9.89";
	double open = stod(open_str);
	int vol = stoi("100002");
	cout << open << "\t" << sizeof(open);
	cout << endl << vol << endl;
}
