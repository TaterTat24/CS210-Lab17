/** lab17-06.c
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
   int min;
   int max;
   int array[] = {-4, 4, 5, 10, -10};
   int arraySize = 5;

   getMinMax(array, arraySize, &min, &max);

   return 0;
}