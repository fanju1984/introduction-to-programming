/*
 * basic_pointer.cpp
 *
 *  Created on: 10 Dec 2018
 *      Author: fanj
 */
#include<stdio.h>
#include <stdlib.h>


void Increment (int *p) {
	*p = (*p)+1;
}

int main () {
	// Example 1
	/*

	int var; // 声明整型变量
	var = 10; // 赋值
	printf ("var = %d\n", var);
	int* p = NULL; // 声明整型指针
	printf ("p = %p\n", p);
	p = &var; // 为指针赋值var的地址
	printf ("p = %p\n", p);
	*p = 12;
	printf ("p = %p\n", p);
	printf ("*p = %d\n", *p);
*/

	// Example 2

	int var=1025; // 声明整型变量
	int *p; // 声明整型指针
	p = &var; // 为指针赋值var地址
	char *q = (char*) p;
	printf ("p = %p\n", p);
	printf ("q = %p\n", q);
	printf ("*p = %d\n", *p);
	printf ("*q = %d\n", *q);
	p++;
	q++;
	printf ("*p = %d\n", *p);
	printf ("*q = %d\n", *q);


	/*
	int var = 5;
	int *p = &var;
	int **q = &p;
	int ***r = &q;
	printf("*p = %d\n", *p);
	printf("*q = %d\n", *q);
	printf("**q = %d\n", **q);
	printf("**r = %d\n", **r);
	printf("***r = %d\n", ***r);
	***r = 10;
	printf ("var = %d\n", var);
	**q = *p + 2;
	printf ("var = %d\n", var);
	*/
	/*
	int a = 10;
	Increment (&a);
	printf ("a = %d\n", a);
	return 0;
	*/
/*
	int ary[5] = {1,2,3,4,5};
	int len;
	scanf("%d", &len);
	int *ptr = (int *) malloc(len * sizeof(int));
	free (ptr);
	*/
}
