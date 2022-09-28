/** lab17-01.c
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
   const int MAX_VALUE = 69;
   int array[MAX_VALUE];
   int arrayLength;

   arrayLength = loadVals(array);
   printf("array length: %d\n", arrayLength);

   reversePrint(array, arrayLength);
   
   return 0;
}