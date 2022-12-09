/** lab17-02.c
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
   char myStr[] = "hello, this is a test.";
   printf("The number of vowels is %d.\n", countVowels(myStr));

   return 0;
}