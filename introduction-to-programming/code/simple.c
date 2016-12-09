/*
 * simple.c
 *
 *  Created on: 9 Dec 2016
 *      Author: fanj
 */


#include <stdio.h>

int main() {
   int a[5]={0,1,2,3,4};   //定义数组，赋初值
   int *p1=NULL,*p2=NULL;  //定义指针变量
   p1=&a[1];   //赋值给指针变量，让p1指向a[1]
   p2=&a[2];   //赋值给指针变量，让p2指向a[2]
   printf("%d,%d\n", *p1, *p2);  //输出a[1]和a[2]
   printf("%d,%d\n", p1, p2);
   int **p3 = NULL;
   p3 = &p1;
   printf("%d\n", *p3);  //输出a[1]和a[2]
   printf("%d\n", p3);
   return 0;
}
