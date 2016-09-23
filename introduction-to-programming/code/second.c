/*
 * second.c
 *
 *  Created on: 22 Sep 2016
 *      Author: fanj
 */


#include <stdio.h>
int main() // a simple program
{

   int num1 = 10, num2 = 5; //declare two variables /
   int sum, max; // declare two variables
   num2 = 15; // assign a value to the variable
   // Compute the summation
   sum = num1 + num2;
   printf("Sum of the two numbers: %d\n", sum);
   // Compute the maximum value
   if (num1 >= num2)
   {
	   max = num1;
   } else {
	   max = num2;
   }
   printf("Max of the two numbers: %d", max);
   return 0;
}
