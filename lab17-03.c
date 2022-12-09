/** lab17-03.c
* ===========================================================
* Name: Benjamin Tat
* Section: T6
* Project: Lab 17
* Purpose: Programming practice for Lessons 1 - 15
* ===========================================================
*/
#include <stdio.h>
#include "lab17functs.h"

int main(void) {
   double values[] = { 5.0, 3.1, 7.2, 3.8, 4.2, 1.1 };

   printf("The number of values within one standard deviation of the mean is: %d.\n", analyzeValues(values, 6));
   
   return 0;
}