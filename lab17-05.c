/** lab17-05.c
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
   char operator;
   int integer1;
   int integer2;

   printf("Enter an operator (+, -, *, /): ");
   scanf("%c", &operator);

   printf("Please enter two integer values separated by a space: ");
   scanf("%d", &integer1);
   scanf("%d", &integer2);

   printf("Operation = %d\n", performOperation(operator, integer1, integer2));

   return 0;
}