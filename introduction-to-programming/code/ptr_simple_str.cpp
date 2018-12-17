//============================================================================
// Name        : ptr_simple_str.cpp
// Author      : Ju Fan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include<string.h>

int main() {
	/**
	 * Example 1: strstr Function
	 */
	char c[] = "astrp";
	char d[] = "str";
	char *pch = strstr(c, d);
	cout << *(pch + 3) << endl;
	// The output should be 'p';

	/**
	 * Example 2: String Insert
	 */
	char a[20] = "ababab";
	char b[] = "def";
	char ans[20];
	for (int i = 0; i < 20; i ++) ans[i] = '\0';
	cout << "a: " << a << endl;
	int pos = 2;
	strncpy (ans, a, pos);
	cout << "After 1: " << ans << endl;
	strcat (ans, b);
	cout << "After 2: " << ans << endl;
	strcat (ans, a+ pos);
	cout << "After 3: " << ans << endl;

	/**
	 *Example 3: strtok Function
	 */
	char date[] = "2018-12-17";
	char *token = strtok (date, "-");
	printf ("%p, %p\n", date, token);
	cout << date << endl;
	token = strtok (NULL, "-");
	printf ("%p, %p\n", date, token);

	return 0;
}
