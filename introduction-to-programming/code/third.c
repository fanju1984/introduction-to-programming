
/*
 ============================================================================
 Name        : third.c
 Author      : Ju Fan
 Version     :
 Copyright   : Your copyright notice
 Description : Computing your BMI index
 ============================================================================
 */


#include <stdio.h>
int main()
{
   float weight;    // user weight
   float height;  // user height
   float bmi;      // BMI index     */

   char c = -1;
   printf("this is   \\'\\   \"  %d \n", c);
   printf("Do you want to know your BMI?\n");
   printf("Let's check it out.\n");

   printf("Please enter your weight in KGs: ");
   /* get input from the user                     */
   scanf("%f", &weight);
   printf("Please enter your height in meters: ");
     /* get input from the user                     */
   scanf("%f", &height);

   bmi = 1.0 * weight / (height * height);
   printf("Your BMI is %.2f.\n", bmi);

   return 0;
}
